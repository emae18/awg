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
const ll MAXN = 100000;
vl primos;
map<int,int> np;
vl primos2;
int criba[MAXN]={0}; //criba[i] = true significa que i es primo

bool is_prime(ll m) { // esto tiene complejidad O(sqrt(m))
	//sirve para m<=10^14
	if(m==1) return false;
	for(ll a=2;a*a<=m;a++) {
		if(m%a==0) {
			//int b = m/a;
			//tengo que a*b = m; O SEA m NO  ES PRIMO
			return false;
		}
	}
	return true;
}
void llenar(){
	//memset(criba,-1,sizeof(criba)); //seteo todos en true
	//esto es O(MAXN * log(log(MAXN)))
	criba[0]=1;
	criba[1]=1;
	criba[2]=0;
	for(ll i=2;i<MAXN;i++) {
		if(criba[i]==0) {
			for(ll j=2*i;j<MAXN;j+=i) {
				criba[j]=1;
			}
		}
	}
}
void llenar2()
{
    for(ll i=MAXN+1;i<1000000000;i+=2)
    {
        if(is_prime(i) && np[i]!=1) {
            primos2.push_back(i);
			for(ll j=2*i;j<1000000000;j+=i) {
				np[j]=1;
			}
		}
    }
}
int main()
{
    ios::sync_with_stdio(0);
    //cin.tie(0);
    cout<<fixed<<setprecision(11);
    int t;
    ll m,n;
    cin>>t;
    llenar();
    while(t--)
    {
        cin>>m>>n;
        ll i=m;
        while(i<MAXN && i<=n)
        {
           if(criba[i]==0)
                cout<<i<<"\n";
           i++;
        }
        if(n>MAXN && primos2.size()==0)llenar2();
        while(i<=n)
        {
            auto it =lower_bound(all(primos2),i);
            if(it!=primos2.end() && *it<=n)
            {
                cout<<*it<<"\n";
                i=*it+1;
                continue;
            }
            i+=2;
        }
        cout<<"\n";
    }
    return 0;
}
