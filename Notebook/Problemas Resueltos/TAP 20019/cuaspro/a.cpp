#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n-1);
    int juan;
    cin>>juan;
    for(int i=0;i<n-1;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    if(juan>=*v.rbegin())
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
