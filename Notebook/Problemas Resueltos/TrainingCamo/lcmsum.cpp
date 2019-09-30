#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
map<ll,vi> m;
vl v(100001);
ll phi[100000 + 2], ans[100000 + 2];
void ETF()
{
    for (int i = 1; i <= 10002; i++) {
        phi[i] = i;
    }
    for (int i = 2; i <= 100002; i++) {
        if (phi[i] == i) {
            phi[i] = i - 1;
            for (int j = 2 * i; j <= 100002; j += i) {
                phi[j] = (phi[j] * (i - 1)) / i;
            }
        }
    }
}

ll LcmSum(int m)
{
    if(ans[m]!=0 && m<100000)return ans[m];
    for (int i = 1; i <= m; i++) {
        for (int j = i; j <= m; j += i) {
            ans[j] += (i * phi[i]);
        }
    }
    ll answer = ans[m];
    answer = (answer + 1) * m;
    answer = answer / 2;
    return answer;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ETF();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<LcmSum(n)<<"\n";
    }
    return 0;
}
