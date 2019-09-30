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
double acosine(double param) {
    return (acos(param) * 180 / 3.1415926535897932 );
}
double cosine(double param) {
    return cos(param * 3.1415926535897932 / 180);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s1, s2, s3, s4, a, b, c, d;
    double ans, aux;
    cin >> s1 >> s2 >> s3 >> s4;
    aux=(s1+s2+s3+s4)/2.0;
    ans=sqrt((aux-s1)*(aux-s2)*(aux-s3)*(aux-s4));
    cout<<fixed<<setprecision(15)<<ans<<"\n";
    return 0;
}
