#include <bits/stdc++.h>
using namespace std;

struct SuffixArray {
  const int L;
  string s;
  vector<vector<int>> P;
  vector<pair<pair<int, int>, int>> M;
  SuffixArray(const string &s)
      : L(s.length()), s(s), P(1, vector<int>(L, 0)), M(L) {
    for (int i = 0; i < L; i++)
      P[0][i] = int(s[i]);
    for (int skip = 1, level = 1; skip < L; skip *= 2, level++) {
      P.push_back(vector<int>(L, 0));
      for (int i = 0; i < L; i++)
        M[i] =
            make_pair(make_pair(P[level - 1][i],
                                i + skip < L ? P[level - 1][i + skip] : -1000),
                      i);
      sort(M.begin(), M.end());
      for (int i = 0; i < L; i++)
        P[level][M[i].second] = (i > 0 && M[i].first == M[i - 1].first)
                                    ? P[level][M[i - 1].second]
                                    : i;
    }
  }
  vector<int> GetSuffixArray() { return P.back(); }

  int LongestCommonPrefix(int i, int j) {
    int len = 0;
    if (i == j)
      return L - i;
    for (int k = P.size() - 1; k >= 0 && i < L && j < L; k--) {
      if (P[k][i] == P[k][j]) {
        i += 1 << k;
        j += 1 << k;
        len += 1 << k;
      }
    }
    return len;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  while (cin >> N && N) {
    vector<string> input(N);
    for (int i = 0; i < N; i++)
      cin >> input[i];
    string conc;
    for (const string &str : input)
      conc += str;

    SuffixArray sufix(conc);
    vector<int> sa = sufix.GetSuffixArray();

    vector<int> dp(conc.size() + 1, 0);
    for (int i = 0; i < conc.size(); ++i) {
      for (int j = 0; j < i; ++j) {
        int lcp = sufix.LongestCommonPrefix(sa[i], sa[j]);
        if (lcp > 0) {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
    }
    int max_l = *max_element(dp.begin(), dp.end());
    cout << max_l << "\n";
  }
  return 0;
}
