#include <bits/stdc++.h>
using namespace std;
int countDivisors(int num) {
  int count = 0;
  for (int i = 1; i * i <= num; ++i) {
    if (num % i == 0) {
      if (i * i == num) {
        ++count;
      } else {
        count += 2;
      }
    }
  }
  return count;
}

int main() {
  std::map<int, int> minDivisors;

  for (int i = 1; i <= 1000000; ++i) {
    int divisors = countDivisors(i);
    if (minDivisors.find(divisors) == minDivisors.end() ||
        i < minDivisors[divisors]) {
      minDivisors[divisors] = i;
    }
  }
  cout << "{";
  for (const auto &pair : minDivisors) {
    cout << pair.second << ", ";
  }
  cout << "}";
  return 0;
}
