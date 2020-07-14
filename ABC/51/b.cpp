#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main() {
  int K, S;
  cin >> K >> S;
  int x, y, z;
  int ans = 0;
  for(x = 0; x <= K; x++) {
    for(y = 0; y <= K; y++) {
      z = S - x - y;
      if(z <= K and z >= 0) ans++;
    }
  }
  cout << ans << endl;
}
