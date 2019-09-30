#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define foreach(x,s) for(auto x : s)
#define mostrar(x,s) for(auto x : s)cout<<x<<" "
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
    int n,c;
    cin>>n>>c;
    vi cv(c);
    forin(i,c)cin>>cv[i];
    vi nv(n);
    forin(i,n)nv[i]=cv[i];
    vi vaux(all(nv));
    sort(all(vaux));
    vi v;
    forin(k,nv.size())v.push_back(k+1);
    int x = distance(nv.begin(),find(all(nv),vaux[0]));
    int i=n-1;
    if(n==c)
    {
        forin(k,n)
        {
            if(k==0)cout<<v[k];
            else cout<<" "<<v[k];
        }
        cout<<"\n";
        return 0;
    }
    while(i<c)
    {
        //mostrar(a,nv);
        //cout<<"\n";
        forin(k,nv.size())
        {
            if(k!=x)
                nv[k]-=nv[x];
        }
        v.push_back(x+1);
        nv[x]=cv[i+1];
        i++;
        vi saux(all(nv));
        sort(all(saux));
        x = distance(nv.begin(),find(all(nv),saux[0]));
    }
    v.pop_back();
    for(int a=0;a<v.size();a++)
    {
        if(a==0)cout<<v[a];
        else cout<<" "<<v[a];
    }
    cout<<"\n";
    return 0;
}
