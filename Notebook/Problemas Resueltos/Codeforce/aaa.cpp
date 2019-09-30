#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v[4];
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    sort(v,v+4);
    if(v[0]+v[3]==v[1]+v[2])cout<<"YES\n";
    else {
        if(v[3]==v[0]+v[1]+v[2]){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
}
