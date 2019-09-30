#include<bits/stdc++.h>
using namespace std;

int main ()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t,aux;
    int v[2]={0,0};
    cin>>n;
    while(n--)
    {
        v[0]=0;
        v[1]=0;
        cin>>t;
        while(t--)
        {
            cin>>aux;
            if(aux==1)v[1]++;
            if(aux==2)v[1]--;
            if(aux==3)v[0]--;
            if(aux==4)v[0]++;
        }
        cout<<v[0]<<","<<v[1]<<"\n";
    }

    return 0;
}
