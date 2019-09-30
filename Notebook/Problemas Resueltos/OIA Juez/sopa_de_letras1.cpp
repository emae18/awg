
#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    vector<string> pal;string aux;
    forin(i,n){cin>>aux;pal.push_back(aux);}
    vector<string> z(pal.begin(),pal.end());
    forin(i,n){reverse(z[i].begin(),z[i].end());pal.push_back(z[i]);}
    vector<string> v(m,"");
    forin(i,z.size())
    {
        forin(j,z[i].size())
        {
            v[j]+=z[i][j];
        }
    }
    forin(i,v.size())pal.push_back(v[i]);
    forin(i,v.size()){reverse(v[i].begin(),v[i].end());pal.push_back(v[i]);}
    //forin(i,pal.size())cout<<pal[i]<<"\n";
   // cout<<"\n";
    bool no=true;
    forin(i,k){
        cin>>aux;
        forin(i,pal.size())
        {
            if(pal[i].find(aux)!=string::npos){cout<<"SI\n";no=false;break;}
            no=true;
        }
        if(no)cout<<"NO\n";
    }

    return 0;
}
