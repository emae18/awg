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
bool comp(string a,string b)
{
    return a.size()>b.size();
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;string a,aux;
    cin.ignore();
    vector<string> v;
    while(n--)
    {
        getline(cin,a);
        stringstream ss;
        ss<<a;
        while(!ss.eof())
        {
            ss>>aux;
            v.push_back(aux);
        }
        stable_sort(all(v),comp);
        forin(i,v.size()){
            if(i==0)cout<<v[i];else cout<<" "<<v[i];}
        v.clear();
        cout<<"\n";
    }
    return 0;
}
