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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
   ifstream cin("colgantes.in");
    ofstream cout("colgantes.out");
    int n;
    cin>>n;int aux;
    vi v(n);int cont=0;
    forin(i,n)cin>>v[i];
    sort(v.begin(),v.end());
    int sum=0;
    forin(i,n-1)
    {
        if(v[i]==v[i+1])
            {
                cont++;
                sum+=v[i]+v[i+1];
                i++;
            }
    }
    if(cont)
    cout<<sum<<" "<<cont<<"\n";
    else cout<<"no se puede";
    return 0;
}

