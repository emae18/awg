#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int nc;
    cin>>nc;
    int n,k;
    while(nc--)
    {
        cin>>n>>k;
        vector<int> v(n,1);
        int cont=n;
        int i;
        while(cont!=1)
        {
            if(v[i]==1)v[i]=0;
            i+=k;
            if(i>=v.size())i-=v.size();
            else if(v[i]==0)i++;
            cont--;
        }
        cout<<i-k<<"\n";
    }
    return 0;
}
