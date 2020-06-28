#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }

  int cnt = 0;
  bool flag = false;

  while (1)
  {
    for (int i = 0; i < N; i++)
    {
      if(A.at(i) % 2 != 0) {
        flag = true;
        break;
      }
      A.at(i) = A.at(i) / 2;
    }
    if(flag) break;
    cnt++;
  }
  cout << cnt << endl;

  return 0;
}