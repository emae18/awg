
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
    string aa="";vector<string> xx;
    forin(i,pal.size())
    {
        forin(f,pal[i].size())
        {
            forisn(j,0,f+2)
            {
                aa+=pal[i][j];
            }
            xx.push_back(aa);
            aa="";
        }
    }
    set<string> s;
    forin(i,pal.size())s.insert(pal[i]);
    forin(i,xx.size())s.insert(xx[i]);
    cout<<"\n";
    for(set<string>::iterator it=s.begin();it!=s.end();it++)cout<<*it<<"\n";
    /*forin(i,k){
        cin>>aux;
        if(s.find(aux)!=s.end())cout<<"SI\n";
        else cout<<"NO\n";
    }*/

    return 0;
}
