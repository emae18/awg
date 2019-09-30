#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long b[n+1]={};
    long long sum=0;
    forin(i,n){cin>>b[i+1];sum+=b[i+1];}
    set<int> g[n+1];
    forin(i,m){
        int a,b;
        cin>>a>>b;
        g[a].insert(b);
    }
    long long k=0;
    while(k<sum){
       long long aa[n+1]={};
        for(int i=1;i<=n;i++){
            set<int>::iterator x=g[i].begin();
            while(b[i]>0 && x!=g[i].end()) {
                b[i]--;
                aa[*x]++;
                x++;
            }
        }
        cout<<b[n]<<"\n";
        k+=b[n];
        b[n]=0;
    }
    return 0;
}
