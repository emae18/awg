#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n,0);
    cin>>v[0];int cont=0;
    for(int i=1;i<n;i++)
    {
        cin>>v[i];
        for(int j=i-1;j>-1;j--)
        {
                if((v[i]+v[j])%10==0)cont++;
        }
    }
    cout<<cont<<"\n";
    return 0;
}
