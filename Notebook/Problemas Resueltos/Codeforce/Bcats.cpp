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
    int n;
    cin>>n;
    vi v(n);
    multiset<int> ms;
    forin(i,n)
    {
        cin>>v[i];
        ms.insert(v[i]);
    }

    int cont=1;
    int racha=ms.count(v[0]);
    int racha2=ms.count(v.size()-1);
    forisn(i,1,n)
    {
        if(ms.count(v[i])>racha){

        }else cont++;
    }
    cout<<cont<<"\n";



    return 0;
}

