#include <bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef long long ll;
const int MAXN = 1000009;
bool criba[MAXN]; //criba[i] = true significa que i es primo


void fill_criba() {
	memset(criba,0,sizeof(criba)); //seteo todos en true
	//esto es O(MAXN * log(log(MAXN)))
	criba[0]=true;
	criba[1]=true;
	for(ll i=2;i<MAXN;i++) {
		if(criba[i]==false) {
			for(ll j=2*i;j<MAXN;j+=i) {
				criba[j]=true;
			}
		}
	}
}
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
int main(){
    int t;
    cin>>t;
    fill_criba();
    ll a,b,c,d;
    while(t--){
        string aa,bb;
        cin>>aa>>bb;
        if(aa==bb){
            cout<<2<<" "<<2<<"\n";
            continue;
        }
        forin(i,5)aa+='0';
        forin(i,5)bb+='0';
        if(aa.find('.') != string::npos){
            aa.erase(aa.begin()+aa.find('.'));
        }
        if(bb.find('.') != string::npos){
            bb.erase(bb.begin()+bb.find('.'));
        }
        istringstream ss(aa);
        ss>>c;
        istringstream ss2(bb);
        ss2>>d;
        ll gcd=__gcd(c,d);
        c/=gcd;
        d/=gcd;
        if (c<100000 && d<100000){
            if(!criba[c] && !criba[d])cout<<c<<" "<<d<<"\n";
            else cout<<"impossible\n";
            continue;
        }
        if(is_prime(c) && is_prime(d)){
            cout<<c<<" "<<d<<"\n";
        }else
        cout<<"impossible\n";
    }
    return 0;
}
