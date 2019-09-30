#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)
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
int dias(vi v,int i, int s)
{
    while(s>0)
    {
        if(v[i]==1)
        {
            v[i]=0;
            s--;
        }
        i++;
    }
    multiset<int> ms(v.begin(),v.end());
    return ms.count(0);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,d,s,aux;
    cin>>n>>d>>s;
    vi v(d,1);
    forin(i,n)
    {
        cin>>aux;
        v[aux-1]=0;
    }
    set<int> ss;
    int i=0;
    while(i<v.size()-s)
    {
        ss.insert(dias(v,i,s));
        i++;
    }
    cout<<*ss.rbegin();
    return 0;
}
