#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main() {
    int N,L;
    cin >> N >> L;

    string s[100], ans;

    REP(i, N) cin >> s[i];
    sort(s, s + N);

    REP(i, N) ans += s[i];
    cout << ans << endl;
}
