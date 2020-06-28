#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") cout << A + B << endl;
  else if (op == "-") cout << A - B << endl;
  else if (op == "*") cout << A * B << endl;
  else if (op == "/") {
    if (B == 0) cout << "error" << endl;
    else cout << A / B << endl;
  }
  else if (op == "?") cout << "error" << endl;
  else if (op == "=") cout << "error" << endl;
  else if (op == "!") cout << "error" << endl;
  
  return 0;
}