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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> dog1(10000,0);
    vector<int> dog2(10000,0);
    for(int i=a+1;i<dog1.size();i+=a+b)
        forin(j,b)
            dog1[i+j]=1;
    for(int i=c+1;i<dog2.size();i+=c+d)
        forin(j,d)
            dog2[i+j]=1;
    int v[3];
    forin(i,3)
    {
        cin>>v[i];
        if(dog1[v[i]]==1 && dog2[v[i]]==1)cout<<"none\n";
        else if(dog1[v[i]]==1 || dog2[v[i]]==1)cout<<"one\n";
        else cout<<"both\n";
    }
    return 0;
}
