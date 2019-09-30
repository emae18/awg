#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    multiset<int> ms;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i};
        ms.insert(v[i]);
    }
    sort(v,v+n);
    return 0;
}
