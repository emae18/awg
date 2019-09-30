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
    char vocal[6]={'a','e','i','o','u','y'};
    int n;
    cin>>n;
    string k;
    cin>>k;string aux="";
    aux+=k[0];
    forisn(i,1,n)
    {
            if(find(vocal,vocal+6,k[i])!=vocal+6 && find(vocal,vocal+6,k[i-1])!=vocal+6)
                continue;
            aux+=k[i];
    }
    cout<<aux<<"\n";
    return 0;
}
