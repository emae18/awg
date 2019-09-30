#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
    int n;
    int a,b=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a<1)b++;
    }
    cout<<b<<"\n";
    return 0;
}
