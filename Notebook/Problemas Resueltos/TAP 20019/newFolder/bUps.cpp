#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define mostrar(x,v) for(auto x :v)cout<<x<<" "
using namespace std;
typedef long long ll;
struct cosa{
    ll x,y,r;
};
double dist(cosa a,cosa b){
    return sqrt(abs(a.x-b.x)*abs(a.x-b.x)+abs(a.y-b.y)*abs(a.y-b.y));
}
bool dentro(cosa a,cosa b){
    if(dist(a,b)+min(a.r,b.r)<max(a.r,b.r))
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<cosa> v(n);
    forin(i,n)
        cin>>v[i].x>>v[i].y>>v[i].r;
    forin(i,n){
        for(int j=i+1;j<n;j++){
            if(!dentro(v[i],v[j])
               && v[i].r+v[j].r>=dist(v[i],v[j])){
                    cout<<"NO\n";
                    return 0;
               }
        }
    }
    cout<<"SI\n";
    return 0;
}
