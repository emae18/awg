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
vi sg(30);
vi v;
void build(int nod,int l,int r)
{
    if(l==r)
        sg[nod]=v[l];
    else{
        build(2*nod,l,(r+l)/2);
        build(2*nod+1,((l+r)/2)+1,r);
        sg[nod]=sg[2*nod]+sg[2*nod+1];
    }
}
int sum(int n ,int start,int e,int l, int r) {
    if(l<start || r>e)return 0;
    if(start>=l && e<=r)return sg[n];
    int p1=sum(2*n,start,(start+e)/2,l,r);
    int p2=sum(2*n+1,(start+e)/2+1,e,l,r);
    return p1+p2;
}
void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        // Leaf node
    z[idx] += val;
        sg[node] += val;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update(2*node, start, mid, idx, val);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update(2*node+1, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);int n,l,r;
    cin>>n;
    v.resize(n);
    forin(i,n)cin>>v[i];
    cin>>l>>r;
    build(1,0,n-1);
    for(auto x : sg)cout<<x<<" ";
    cout<<"\n";
    cout<<sum(1,0,n-1,l,r)<<"\n";
    return 0;
}
