#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;int i;int a,b,sum1=0,sum2=0;
    cin>>n;
    while(n--)
    {
        cin>>t;
        int v[t];
        for( i=0;i<t;i++)
        {
            cin>>v[i];
            if(i>=t/2)sum2+=v[i];
            else sum1+=v[i];
        }
        if(sum2>=sum1)
        {
            cout<<"Orden original";
            for(int i=0;i<t;i++)cout<<" "<<v[i];
            cout<<"\n";
        }else{
                cout<<"Orden invertido";
            for(int i=t-1;i>-1;i--)cout<<" "<<v[i];
            cout<<"\n";
        }

        sum2=0;sum1=0;
    }
    return 0;
}
