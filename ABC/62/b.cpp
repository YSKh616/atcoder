#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  int H, W;
  cin >> H >> W;

  vector<string> A(H);

  for (int i = 0; i < H; i++)
  {
    cin >> A.at(i);
  }
  
  for (int i = 0; i < H + 2; i++)
  {
    if (i == 0 || i == H + 1) {
      for (int j = 0; j < W + 2; j++)
      {
        cout << '#';
      }
      cout << endl;
    } else {
      cout << '#' << A.at(i - 1) << '#' << endl;
    }
  }

  return 0;
}