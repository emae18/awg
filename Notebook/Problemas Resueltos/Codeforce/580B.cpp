#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
//
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vl v(n+5);
    vl neg,pos,ceros,unoneg,unopos;
    forin(i,n){
        cin>>v[i];
        if(v[i]==1){unopos.push_back(1);continue;}
        if(v[i]==-1){unoneg.push_back(-1);continue;}
        if(v[i]<0)neg.push_back(v[i]);
        else if(v[i]>0) pos.push_back(v[i]);
        else ceros.push_back(v[i]);
    }
     long long cont=0;
    if(unoneg.size()%2!=0 && ceros.size()==0){
        unopos.push_back(1);
        unoneg.pop_back();
        cont+=2;
    }else if(unoneg.size()%2!=0){
        ceros.pop_back();
        cont++;
    }
    if(neg.size()%2!=0 && ceros.size()==0){
        forin(i,neg.size()-1)
            cont+=abs((-1)*neg[i]-1);
        cont+=abs(*neg.rbegin()-1);
    }else if(neg.size()!=0){
        neg.push_back(0);
        cont--;
        forin(i,neg.size())
            cont+=abs((-1)*neg[i]-1);
    }
            cont+=ceros.size();

    forin(i,pos.size())
        cont+=(pos[i]-1);
    cout<<cont<<"\n";
    return 0;
}
