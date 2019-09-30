#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    set<int> s;int aux;
    while(n--)
    {
        cin>>aux;
        s.insert(aux);
    }
    double x=*s.rbegin()*k/1000.00;
    int men=ceil(x);
    //int may=floor(x);
    cout<<men<<"\n";

    return 0;
}
