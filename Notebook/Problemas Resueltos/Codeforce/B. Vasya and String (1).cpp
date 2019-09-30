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
    int n,k;
    cin>>n>>k;
    string ab,aux;
    cin>>ab;
    aux=ab;unordered_multiset<char> ms;
    forin(i,n)
        ms.insert(ab[i]);
//    cout<<ms.count('a')<<" b: "<<ms.count('b');
    int cantA=ms.count('a');
    int cantB=ms.count('b');
    size_t t;

    return 0;
}
