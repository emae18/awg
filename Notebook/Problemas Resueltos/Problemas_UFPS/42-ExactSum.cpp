#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
 	//cin.tie(NULL);
 	//cout.tie(NULL);
    int n,k;
    while(cin>>n)
    {
        int v[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cin>>k;
        sort(v,v+n);
        for(int i=0;i<n;i++)
        {
            if(v[i]+v[i+1]==k){cout<<"Peter should buy books whose prices are "<<v[i]<<" and "<<v[i+1]<<".";break;}
        }
        cout<<"\n";
    }
    return 0;

}
