#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,b;
    double p;
    cin>>n;
    while(n--)
    {
        cin>>b>>p;
        double bpm=60*b/p;
        double t=60/p;
        cout<<fixed<<setprecision(4)<<bpm-t<<" "<<bpm<<" "<<bpm+t<<"\n";
    }
    return 0;
}
