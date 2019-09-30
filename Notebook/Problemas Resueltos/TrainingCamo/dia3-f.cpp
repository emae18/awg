#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
//loops and more
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
//solve
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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vl v(n);
    forin(i,n){
        cin>>v[i];
        ll k=sqrt(v[i]);
        if(k*k==v[i] && is_prime(k))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
