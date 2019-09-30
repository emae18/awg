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
    int n,m;
    cin>>n>>m;
    vi v(n);set<int> s;
    forin(i,n){
        cin>>v[i];
        s.insert(v[i]);
    }int cont=0;
    sort(v.begin(),v.end());
    forin(i,n)
    {
        forisn(j,i+1,n-1)
        {
            if(binary_search(v.begin(),v.end(),v[i]+v[j])==false && v[i]+v[j]<=m && v[i]!=0 && v[j]!=0){cont++;
                v[i]=0;
            }
        }
    }
    cout<<cont<<"\n";
	return 0;
}

