#include<bits/stdc++.h>
using namespace std;

int main ()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t;
    string aux;
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
            if(aux=="ALICE")v[0]+=2;
            else if( aux=="BOB") v[1]+=2;
            else {v[0]++; v[1]++;}
        }
        if(v[0]>v[1])
                cout<<"ALICE\n";
        else if(v[1]>v[0])cout<<"BOB\n";
        else
        cout<<"EMPATE\n";
    }

    return 0;
}
