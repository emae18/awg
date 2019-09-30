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
bool criba[MAXN]; //criba[i] = true significa que i es primo

void llenar(){
	memset(criba,-1,sizeof(criba)); //seteo todos en true
	//esto es O(MAXN * log(log(MAXN)))
	criba[0]=false;
	criba[1]=false;
	for(int i=2;i<MAXN;i++) {
		if(criba[i]==true) {
			for(int j=2*i;j<MAXN;j+=i) {
				criba[j]=false;
				cout<<j<<"\n";
			}
		}
	}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   // cout<<fixed<<setprecision(11);
    int t;
    ll m,n;
    cin>>t;
    llenar();
    while(t--)
    {
        cin>>m>>n;
        for(int z=m;z<=n;z++)
        {
            if(criba[z]==true){cout<<"d"<<z<<"\n";}
        }
        cout<<"\n";
    }
    return 0;
}
