#include<bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string a,d;
    cin>>n;
    while(n--)
    {
        cin>>a>>d;
        if(a.length()>=d.length())cout<<"go\n";
        else cout<<"no\n";
    }
    return 0;
}
