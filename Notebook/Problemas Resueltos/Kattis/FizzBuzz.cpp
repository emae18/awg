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
    int x,y,n;
    cin>>x>>y>>n;
    forisn(i,1,n+1)
    {
        if(i%x==0 && i%y==0)cout<<"FizzBuzz\n";
        else if(i%x==0) cout<<"Fizz\n";
        else if(i%y==0)cout<<"Buzz\n";
        else cout<<i<<"\n";
    }
    return 0;
}
