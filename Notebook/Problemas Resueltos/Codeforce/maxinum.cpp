#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);vector<int> sum; int sum2=0;int cont=0;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i+=2)
    {
        sum.push_back(v[i]);
        if(sum.size()==2){
            sum2+=(sum[0]*sum[1]);
            sum.clear();
        }
    }

    cout<<sum2<<"\n";
    return 0;
}
