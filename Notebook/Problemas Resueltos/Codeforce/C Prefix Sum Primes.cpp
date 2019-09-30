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
bool primo(int x)
{
    for(int p=2;p*p<=x;p++)if(x%p==0)return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi v(n,0);
    multiset<int> ms;
    forin(i,n){cin>>v[i];ms.insert(v[i]);}
    vi k;
    int uno=ms.count(1);
    int dos=ms.count(2);
    if(ms.count(2)==n)forin(i,n)cout<<2<<" ";
    else if(ms.count(1)==n)forin(i,n)cout<<1<<" ";
    else if(ms.count(2)==1){forin(i, n )
                            {
                                if(i==0){cout<<2<<" ";continue;}
                                cout<<1<<" ";
                            }}
    else if(ms.count(1)==1){forin(i, n )
                            {
                                if(i==1){cout<<1<<" ";continue;}
                                cout<<2<<" ";
                            }}
    else
    {
        vector<int> res(n);
        res[0]=2;
        dos--;
        res[1]=1;
        uno--;
        int in=2;
        forin(i,dos)
            {res[in]=2;in++;}
        forin(i,uno)
          {
              res[in]=1;in++;
          }
        forin(i,n)cout<<res[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
