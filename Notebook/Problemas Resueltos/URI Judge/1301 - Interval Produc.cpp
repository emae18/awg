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
vector<char> sg;
int n,l,a,b,r,q;
vi v;
void build(int nod,int l,int r)
{
    if(l==r)
        sg[nod]=((v[l]>0)?'+':((v[l]<0)?'-':'0'));
    else{
        build(2*nod,l,(r+l)/2);
        build(2*nod+1,((l+r)/2)+1,r);
        sg[nod]=(sg[2*nod]=='0' || sg[2*nod+1]=='0')?'0':(sg[2*nod+1]==sg[2*nod])?'+':'-';
    }
}
char sum(int n ,int start,int e,int l, int r) {
     if(r < start or e < l)
    {
         return '+';
    }
    if(l <= start and e <= r)
    {
        return sg[n];
    }
    int mid = (start + e) / 2;
    char p1 = sum(2*n, start, mid, l, r);
    char p2 = sum(2*n+1, mid+1, e, l, r);
    return (p1=='0' || p2=='0')?'0':(p1==p2)?'+':'-';
}
void update(int nodo,int s,int e, int pos,int val)
{
    if(s == e)
    {
        v[pos] = val;
        sg[nodo] = (val>0)?'+':(val<0)?'-':'0';
    }
    else
    {
        int mid = (s + e) / 2;
        if(s <= pos and pos <= mid)
        {
            update(2*nodo, s, mid, pos, val);
        }
        else
        {
            update(2*nodo+1, mid+1, e, pos, val);
        }
        sg[nodo] = (sg[2*nodo]=='0' && sg[2*nodo+1]=='0')?'0':(sg[2*nodo+1]==sg[2*nodo])?'+':'-';
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)break;
        sg.resize(4*n);int aux;
        forin(i,n){cin>>aux;v.push_back(aux);}
        build(1,0,n-1);
        mostrar(x,sg);cout<<"\n";
        forin(i,q)
        {
            char aux;
            cin>>aux>>a>>b;
            if(aux=='C')
                update(1,0,n-1,a-1,b);
            else if(aux=='P')
                cout<<((sum(1,0,n-1,a-1,b-1)=='0')?'0':((sum(1,0,n-1,a-1,b-1)=='+')?'+':'-'));
        }
        cout<<"\n";
    }
    return 0;
}
