#include<bits/stdc++.h>

using namespace std;

int main()
{
    //ios::sync_with_studio(0);
    cin.tie(0);
    int n;int m=0,d=0,a=0;
    cin>>n;
    while(n>=365)
    {
        a++;n-=365;
    }
    while(n>=30){
        m++;n-=30;
    }
    while(n>0)
    {
        d++;n--;
    }
    cout<<a<<" ano(s)"<<"\n";
    cout<<m<<" mes(es)"<<"\n";
    cout<<d<<" dia(s)"<<"\n";
    return 0;
}
