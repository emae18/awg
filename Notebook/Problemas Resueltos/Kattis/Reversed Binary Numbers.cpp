#include<bits/stdc++.h>
using namespace std;
vector<int> bin(int n)
{
    vector<int> b;
    while(n>1)
    {
       b.push_back(n%2);
       n/=2;
    }
    b.push_back(n%2);
    return b;
}
int main()
{
    long long n;
    cin>>n;
    vector<int> b= bin(n);
    long long sum=0;int ant=0;
    for(int i=0;i<b.size();i++)
            {ant=((ant*2)+b[i]);}
    cout<<ant<<"\n";
    return 0;
}
