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
const int MAXN = 1000000;
vl primos;
int criba[MAXN]; //criba[i] = true significa que i es primo

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
	for(int i=2;i<MAXN;i++) {
		if(criba[i]==0) {
            primos.push_back(i);
			for(int j=2*i;j<MAXN;j+=i) {
				criba[j]=1;
				//cout<<j<<"\n";
			}
		}
	}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
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
        while(i<n)
        {
            int c=0;
            for(auto k : primos)
                if(i%k==0){c=k;break;}
            if(c==0)cout<<i<<"\n";
            if(i%2==0)i++;
            else i+=2;
        }
        cout<<"\n";
    }
    return 0;
}
