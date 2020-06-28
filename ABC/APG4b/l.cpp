#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, i = 0, ans;
  cin >> N >> A;
  ans = A;

  // ここにプログラムを追記
  while (i < N) {
    int B;
    string op;
    cin >> op >> B;
    if (op == "+") ans = ans + B;
    else if (op == "-") ans = ans - B;
    else if (op == "*") ans = ans * B;
    else if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
        return 0;
      }
      ans = ans / B;
    }
    i++;
    cout << i << ":" << ans << endl;
  }
}
