#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
#define mostrar(x,v) for(auto x:v)cout<<x<<" ";
using namespace std;
typedef vector<int> vi;
typedef long long ll;
 long long n,t,m;
 long long sum=0LL;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>m;
        int ar[10];
        ll digits=m%10;
        ar[0] = m%10;
        for(int i = 1; i < 10; i++)
        {
            ar[i] = (m*(i+1))%10;
            digits+=ar[i];
        }
        ll K = n/m;
        ll K2 = K%10LL;
        sum= (K/10)*digits;
            for( int i = 0;i< K2;i++) sum+= ar[i];
        cout<<sum<<"\n";
    }
    return 0;
}
