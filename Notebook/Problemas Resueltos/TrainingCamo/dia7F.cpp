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
map<int, vi> ma;
    map<int,int> tam;

typedef function<bool(pii ,pii)>Comparator;
Comparator comp=[](pii e1,pii e2){
    return e1.second<e2.second;
};

int main()
{
    ios::sync_with_stdio(0);
    //cin.tie(0);
    int n,m;
    cin>>n>>m;
    char dot;
    map<int, vi> ma;
    map<int,int> tam;
    int dots;
    for(int i=1;i<=n;i++)
    {
        for(int col=1;col<=m;col++)
        {
            cin>>dot;
            if(dot=='*')
            {
                ma[i].push_back(col);
                tam[i]++;
                dots++;
            }
        }
    }
    if(tam.size()==0)
    {
        cout<<"NO\n";
        return 0;
    }
    set<pii,Comparator> s(all(tam),comp);
    // cout<<ma.size()<<"\n";

        if(ma.size()==1)
    {
        cout<<"YES\n";
        cout<<ma.begin()->first<<" "<<ma.begin()->second[0];
        return 0;
    }
    if(s.begin()->second!=s.rbegin()->second)
    {
        auto it=s.rbegin();
        it++;
        if(it->second==s.begin()->second)
        {
            cout<<"YES\n";
            cout<<s.rbegin()->first<<" ";
            cout<<ma[s.begin()->first][0]<<" ";
        }
        else {cout<<"NO\n";}
    }else{
        auto it2=ma.begin();
        it2++;
        for(auto it : ma)
        {
            //cout<<it.second[0]  <<"\n";
            //cout<<it2->second[0]<<"\n";;
            if(it.second[0] != it2->second[0]){
                cout<<"NO\n";
                return 0;
            }
            if(*it.second.begin() != *it2->second.rbegin()){
                cout<<"NO\n";
                return 0;
            }
            it2++;
            if(it2==ma.end())break;
        }
        cout<<"YES\n";
        cout<<ma.begin()->first<< " "<<ma.begin()->second[0]<<"\n";

    }


    return 0;
}
