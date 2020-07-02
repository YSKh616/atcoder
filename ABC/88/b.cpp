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
  int card[110];

  for (int i = 0; i < N; i++)
  {
    cin >> card[i];
  }

  sort(card, card + N, greater<int>());
  int Alice = 0, Bob = 0;
  for (int i = 0; i < N; i++)
  {
    if (i % 2 == 0) {
      Alice += card[i];
    } else {
      Bob += card[i];
    }
  }
  cout << Alice - Bob << endl;

  return 0;
}