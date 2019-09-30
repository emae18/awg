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
    int k,n;
    cin>>k>>n;
    vi v(n);multiset<int> ms;
    forin(i,n)
    {
        cin>>v[i];
        ms.insert(v[i]);
    }int b=1;si s;
    vi aux=v;
    multiset<int> ms2=ms;
    while(b<=n)
    {
        int i=0;bool band=true;
        while(b+i*k<=n && b+i*k>0 && band)
        {
            if(v[b+i*k]!=0 && v[b+i*k]==1)
            {
                v[b+i*k]=0;
                ms.erase(1);
            }if(v[b+i*k]!=0 && v[b+i*k]==-1)
            {
                v[b+i*k]=0;
                ms.erase(-1);
            }
            i++;
            if(b+i*k>n)i=(i-1)*-1;
            if(!i)band=false;
        }
        s.insert(abs((int)ms.count(-1)-(int)ms.count(1)));
        v=aux;
        ms=ms2;
        b++;
    }
    cout<<*s.rbegin()<<"\n";
    return 0;
}
