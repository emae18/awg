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
    string m[47]={"`","1","2","3","4","5","6","7","8","9","0","-","="
    ,"Q","W","E","R","T","Y","U","I","O","P","[","]","\\",
    "A","S","D","F","G","H","J","K","L",";","'",
    "Z","X","C","V","B","N","M",",",".","/"};
    vector<string> f1(m,m+sizeof(m)/sizeof(*m));
    string k;
    //forin(i,f1.size())cout<<f1[i]<<" ";

    while(getline(cin,k)){
    vector<string>::iterator it;
    forin(i,k.size())
    {
        char a=k[i];
        string v(1,a);
        if(k[i]!=' ' && k[i]!='Q' && k[i]!='A' && k[i]!='Z' && k[i]!='`'){
        it=find(f1.begin(),f1.end(),v);
        int index=distance(f1.begin(),it);
        cout<<f1[index-1];
        }else cout<<" ";
    }
    cout<<"\n";
    }
    return 0;
}
