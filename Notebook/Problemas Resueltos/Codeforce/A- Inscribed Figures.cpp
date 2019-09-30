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
    forin(i,n)cin>>v[i];bool inf=false;int cont =0;
    for(int i=0;i<n;i++)
    {
        if(i+2<n){
        if(v[i]==2 && v[i+1]==1 && v[i+2]==3)cont+=7;
        else if(v[i]==3 && v[i+1]==1 && v[i+2]==2)cont+=3;
        else if(v[i]==3 && v[i+1]==2 && v[i+2]==1)cont+=3;
        else inf=true;
        }
    }
    if(!inf)cout<<"Finite\n"<<cont<<"\n";
    else cout<<"Infinite\n";
	return 0;
}

