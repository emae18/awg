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
    string a1,a;
    int w,w1,x,y,z,x1,y1,z1;
    cin>>a;
    cin>>w;
    scanf("%d : %d : %d",&x,&y,&z);
    cin>>a1;
    cin>>w1;
    scanf("%d : %d : %d",&x1,&y1,&z1);
    if(z>z1)
    {
        y1--;
        z1+=60;z1-=z;
    }else z1-=z;
    if(y>y1)
    {
        x1--;
        y1+=60;y1-=y;
    }else y1-=y;
    if(x>x1)
    {
        w1--;
        x1+=24;x1-=x;
    }else x1-=x;
    w=w1-w;
    cout<<w<<" dia(s)\n"<<x1<<" hora(s)\n"<<y1<<" minuto(s)\n"<<z1<<" segundo(s)\n";
    return 0;
}
