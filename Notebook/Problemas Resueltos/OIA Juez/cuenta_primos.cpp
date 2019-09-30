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
using namespace std;
bool primo(int n)
{
    for(int i=2;i*i<=n;i++)if(n%i==0)return false;
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi v(n,0);int cont=0;
    forin(i,n){cin>>v[i];
        if(i)
        {
            for(int j=i-1;j>-1;j--)
            {
                    if(primo(v[i]+v[j]))cont++;
            }

        }
    }
    cout<<cont<<"\n";
    return 0;
}
