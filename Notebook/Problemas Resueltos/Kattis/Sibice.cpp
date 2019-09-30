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
double hip(int h,int w)
{
    return sqrt(pow(h,2)+pow(w,2));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,h,w;
    cin>>n>>h>>w;
    int k;
    double hipo=hip(h,w);
    forin(i,n)
    {
        cin>>k;
        if(k<=h || k<=w)cout<<"DA\n";
        else if(k<=hipo) cout<<"DA\n";
        else cout<<"NE\n";
    }
    return 0;
}
