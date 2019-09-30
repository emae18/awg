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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vi c(n);
        forin(i,n)cin>>c[i];
        int i;
        for(i=0;i<n-1;i++){
            int dif=abs(c[i]-c[i+1]);
            cout<<"m->"<<m<<"\n";
            cout<<"dif-> "<<dif<<"\n";
            cout<<"\n";
            if(dif>k){
                if(abs(dif-k)>m ){
                    if(c[i]>c[i+1]){
                        m+=abs(dif);
                        c[i]-=abs(dif);
                        if(c[i]-k<0){
                            m+=(k-c[i]);
                            c[i]-=(k-c[i]);
                        }else{
                        m+=k;
                        c[i]-=k;}

                        cout<<"m->"<<m<<"\n";
                        cout<<"c[i]-> "<<c[i]<<"\n";
                    }else{
                        cout<<i<<"\n";
                        cout<<m<<"\n";
                        cout<<"NO\n";
                        break;
                    }
                }else{
                    m-=abs(dif-k);

                    c[i]+=abs(dif-k);
                }
            }else{
                if(c[i]>c[i+1]){
                    c[i]+=c[i+1]-1;
                    m+=c[i+1]-1;
                }else{
                    m+=(k-abs(c[i+1]-c[i]));
                    c[i]-=(k-abs(c[i+1]-c[i]));
                }
            }
        }
        if(i==n-1)cout<<"YES\n";
    }
    return 0;
}
