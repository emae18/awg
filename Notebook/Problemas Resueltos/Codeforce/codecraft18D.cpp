#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef vector<int> vi;
typedef long long ll;
vi sg(400020);
vi v(50005);
void build(int nod,int l,int r)
{
    if(l==r)
        sg[nod]=v[l];
    else{
        build(2*nod,l,(r+l)/2);
        build(2*nod+1,((l+r)/2)+1,r);
        sg[nod]=__gcd(sg[2*nod],sg[2*nod+1]);
    }
}
int rmq(int n ,int start,int e,int l, int r) {
    if(l>e || r<start)return -1;
    if(start>=l && e<=r)return sg[n];
    int p1=rmq(2*n,start,(start+e)/2,l,r);
    int p2=rmq(2*n+1,(start+e)/2+1,e,l,r);
    if(p1==-1)return p2;
    if(p2==-1)return p1;
    return __gcd(p1,p2);
}

int main(){
   // ios::sync_with_stdio(0);
    //cin.tie(0);
    int n;
    cin>>n;
    forin(i,n)cin>>v[i];
    build(1,0,n-1);
    forin(i,50)cout<<sg[i]<<" ";
    cout<<"\n";
    int q,a,b,c,d;
    cin>>q;
    while(q--){
        cin>>a>>b>>c>>d;
        if(a==1){
            int x=rmq(1,0,n-1,b-1,c-1);
            cout<<x<<"\n";
            cout<<((x==d)?"YES\n":"NO\n");
        }else {
            continue;
        }
    }
    return 0;
}
