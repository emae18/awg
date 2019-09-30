#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;string a;int i=0;
    stack<int> p;
    while(n--)
    {
        cin>>a;
        for(i=0;i<a.length();i++)
        {
            if(a[i]=='(')p.push(1);
            else if( !p.empty()) p.pop();
            else{cout<<"INCORRECTO\n";break;continue;}
        }
        if(!p.empty())cout<<"INCORRECTO\n";
        else if (i==a.length())cout<<"CORRECTO\n";
    }
    return 0;
}
