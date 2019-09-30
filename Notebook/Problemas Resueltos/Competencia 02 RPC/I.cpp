#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<int(n);i++)
#define forit(i,n) for(typeof n.begin() i=n.begin();i!=n.end();i++)

typedef long long ll;

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //cout.tie(NULL);
    double c;
    int l;
    double wi,li;
    cin>>c;
    cin>>l;double cF=0;
    while(l--){
        cin>>wi>>li;
        cF+=((wi*li)*c);
    }
    cout<<fixed<<setprecision(7)<<cF<<"\n";
    return 0;
}
