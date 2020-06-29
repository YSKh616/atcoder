#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  int N, A, B;
  cin >> N >> A >> B;

  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    int num = i;
    int sum = 0;
    while (1)
    {
      if(num / 10 == 0) {
        sum += num;
        if(A <= sum && sum <= B) {
          ans += i;
        }
        break;
      } else {
        sum += num % 10;
        num = num / 10;
      }
    }
  }
  cout << ans << endl;

  return 0;
}