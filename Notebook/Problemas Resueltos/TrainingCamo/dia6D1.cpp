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
vl noDivsPar;
vl noDivsImp;
ll all_divisors(ll m) {
	vector<ll> divs;
	for(ll a=1;a<=m;a++) {
		if(m%a==0) {
			divs.push_back(a);
			if(a!=m/a) divs.push_back(m/a);
		}else{
        if(a%2==0 && m%a!=0)noDivsPar.push_back(a);
        else if(m%a!=0)noDivsImp.push_back(a);
        }
	}
	return divs.size();
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll k=all_divisors(n);
        cout<<k<<"\n";
        int sum=(k*n);
        cout<<noDivsImp.size()<<"\n";
        cout<<noDivsPar.size()<<"\n";
        for(ll i=0;i<noDivsImp.size();i++)
                sum+=(noDivsImp[i]*n);
        for(ll i=0;i<noDivsPar.size();i++)
            sum+=(noDivsPar[i]*n/2);
        cout<<sum<<"\n";
   }
    return 0;
}
