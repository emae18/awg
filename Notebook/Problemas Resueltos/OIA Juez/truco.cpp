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
vector<int> v;
void llenar(int &i)
{
    if(v[i]){i++;
        llenar(i);}
    else
        v[i]=1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin("truco.in");
    ofstream cout("truco.out");
    int n;cin>>n;
    v.resize(n+1);
    v[0]=1;
    vi in(40);char c;
    forin(i,40)
        cin>>in[i]>>c;
    int j=1;multiset<int> s;
    forin(i,40)
    {
        if(s.count(1)==n/2)break;
        if(j>n)j-=n;
        if(in[i]==12){
            llenar(j);s.insert(1);}
        j++;
    }
    forisn(i,1,n+1)
        if(v[i])cout<<i<<" ";
    cout<<"\n";
    forisn(i,1,n+1)
        if(v[i]==0)cout<<i<<" ";
	return 0;
}

