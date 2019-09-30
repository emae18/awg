#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
int main()
{
    int w,h,d;
    cin>>w>>h>>d;
    d*=2;
    w-=d;
    h-=d;
    if(w<=0)w=0;
    if(h<=0)h=0;
    cout<<((w*h<=0)?0:w*h)<<"\n";
    return 0;

}
