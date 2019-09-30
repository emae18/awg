#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0;int cont;
    cin>>n;

        if(k==0){cout<<1<<"\n";}
        for(long i=1;i<n;i++)
        {
            cont=0;
            if((int)(pow(6,i))%i==0)cont++;
            cout<<cont<<"\n";
        }



    return 0;
}
