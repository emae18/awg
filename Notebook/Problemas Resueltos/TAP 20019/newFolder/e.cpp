#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;


int main()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    double p1=x*100.00/n;
    double p2=y*100.00/m;
    double sumA=(p1+p2)/2.0;
    double sumB=(x+y)*100.00/(n+m);
    if(abs(sumA-sumB)<1e-9)cout<<"C\n";
    else if(sumA>sumB)cout<<"A\n";
    else cout<<"B\n";
    return 0;
}
