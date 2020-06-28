#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int ans = 1;
  cin >> S;

  // ここにプログラムを追記
  for (int i = 0; i < S.size(); i++)
  {
    if (i % 2 != 0) {
      if (S.at(i) == '+') ans++;
      else ans--;
    }
  }
  cout << ans << endl;
}
