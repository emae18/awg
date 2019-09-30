#include<bits/stdc++.h>
using namespace std;
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
ll m[9999][9999];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int rx,ry,r1x,r1y,ipx,ipy,dpx,dpy;
    cin>>n;
    forin(i,n)
    {
        cin>>rx>>ry>>r1x>>r1y>>ipx>>ipy>>dpx>>dpy;
        rx+=100;ry+=100;r1x+=100;r1y+=100;ipx+=100;ipy+=100;dpx+=100;dpy+=100;
        m[rx][ry]=1;
        m[r1x][r1y]=1;
        int k=r1y;int z=r1x;
        while(z>rx && k<ry)
        {
            m[z][k]=1;
            k++;
            z--;
        }
        for(int a=ipx;a<=ipy;a++)
        {
            for(int b=ipx;b<=dpx;b++)
            {
                if(m[a][b]==1){cout<<"T\n";return 0;}
                m[a][b]=1;
            }
        }
       /* forin(a,20){
            forin(b,20)
            {
                cout<<m[a][b]<<" ";
            }
            cout<<"\n";
        }*/
        cout<<"F\n";
    }

    return 0;
}
