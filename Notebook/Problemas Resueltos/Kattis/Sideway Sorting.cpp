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
string mina(string a)
{
    transform(a.begin(),a.end(),a.begin(),(int(*)(int))tolower);
    return a;
}
bool charcomp(string a, string b)
{
    for(auto& c : a)c=tolower(c);
    for(auto& c : b)c=tolower(c);
    return a<b;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r,c;

    while(cin>>r>>c && (r+c)){
        vector<string> v(c,"");
        forin(i,r)
        {
            forin(j,c)
            {
                char a;
                cin>>a;
                v[j].push_back(a);
            }
        }
        stable_sort(v.begin(),v.end(),charcomp);
        //forin(i,r)cout<<v[i]<<"\n";
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cout << v[j][i];
            }
            cout << endl;
        }
        cout<<"\n";
    }
    return 0;
}
