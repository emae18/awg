#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
#define DG(x) cout<<#x<<"="<<x<<"\n";
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef function<bool(pair<string,int> ,pair<string,int> )>Comparator;
Comparator comp=[](pair<string,int> e1,pair<string,int> e2){return e1.second>e2.second;};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int z=1;z<t+1;z++){
        int n,m;
        cin>>n>>m;
        string op;
        cin>>op;
        vl a(n);vl b(m);
        if(op=="union")vl uni;
        if(op=="intersection")vl ins;
        if(op=="difference")vl dif;
        if(op=="symmetric_difference")vl sydif;
        forin(i,n)cin>>a[i];
        sort(all(a));
        if(op=="union"){
            multiset<int> ms(all(a));
            forin(i,m){
                cin>>b[i];
                if(!binary_search(all(a),b[i]))ms.insert(b[i]);
            }
            cout<<"Case "<<z<<":";
            mostrar(x,ms);
            cout<<"\n";
        }
        if(op=="intersection"){

        }
        if(op=="difference")vl dif;
        if(op=="symmetric_difference")vl sydif;



    }
    return 0;
}
