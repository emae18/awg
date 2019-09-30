#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef  long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<vector<int> > vvi;
#define clr(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define frpn(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define all(a) a.begin(), a.end()
#define mkp make_pair
#define forn(i, n) for(int i=0; i<(int)n; ++i)
#define forab(i, a, b) for(int i=(int)a; i<(int)b; ++i)
#define fornd(i, n) for(int i=n; i>=0; --i)

const int INF = (int)1e6+5;
const int NAX = (int)3e5+5;
const int MOD = (int)1e9+7;

template <class T>
inline void rem(T &n){
   n = (-MOD <= n && n <= MOD) ? n : n%MOD ;
  if(n < 0) n += MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(1){
      string s = to_string(n);
      int sm = 0;
      forn(i, s.length()){
         sm += s[i] - '0';
      }
      if(sm%4 == 0){
        cout << n << "\n";
        return 0;
      }
      n++;
    }
    return 0;
}
