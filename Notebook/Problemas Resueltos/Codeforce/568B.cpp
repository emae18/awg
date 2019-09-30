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
string limpiar(string &k)
{
    string a="";a+=k[0];
    forin(i,k.size())
    {
        if(i)
        {
            if(k[i]==k[i-1] || k[i]==k[i+1])i++;
                a+=k[i];
        }
    }
   // cout<<a<<"\n";
    return a;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<string, string> > v(n);
    forin(i,n)cin>>v[i].first>>v[i].second;
    forin(i,n)
    {
        if(v[i].second.find(v[i].first)!=string::npos && v[i].first[0]==v[i].second[0] && v[i].first[v[i].first.size()-1]==v[i].second[v[i].second.size()-1])
        {
            cout<<"YES\n";continue;
        }else if(v[i].first==limpiar(v[i].second))
        {
            cout<<"YES\n";continue;
        }else{
            cout<<"NO\n";
        }
    }




    return 0;
}
