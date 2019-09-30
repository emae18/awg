#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<n;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int v[n];
    int sum=0;
    fori(i,n){cin>>v[i];
            sum+=v[i];
    }
    sort(v,v+n);
    int c5=sum*0.45;
    int c4=sum*0.4;
    int c1=sum*0.1;
    if(v[n-1]>= c5)
        cout<<1<<"\n";
    else{
        if(v[n-1]>=c4 && v[n-1]>=v[n-2]+c1)cout<<1<<"\n";
        else cout<<2<<"\n";
    }
    return 0;
}
