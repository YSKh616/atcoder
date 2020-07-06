#include <bits/stdc++.h>
#include <set>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int main()
{
  int N;
  int d[120];
  cin >> N;

  // 入力格納
  for (int i = 0; i < N; ++i) cin >> d[i];

  set<int> values;
  for (int i = 0; i < N; i++) {
    values.insert(d[i]);
  }

  cout << values.size() << endl;
}
