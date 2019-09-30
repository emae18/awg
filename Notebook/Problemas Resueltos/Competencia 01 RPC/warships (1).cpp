#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string t,n; int t1,n1;
    while(cin>>t>>t1>>n>>n1)
    {
        if(t==n )
        {
            if(t1==n1)cout<<"Draw\n";
            else if(t1>n1) cout<<"Tobby\n";
            else cout<<"Naebbirac\n";
            continue;
        }
        if(t=="Battleships")
        {
            if(n=="Cruisers")
            {
                if(t1/2>=n1)cout<<"Tobby\n";
                else cout<<"Naebbirac\n";
            }
            if(n=="Destroyers")
            {
                if(n1/2>=t1)cout<<"Naebbirac\n";
                else cout<<"Tobby\n";
            }
        }
        if(t=="Destroyers")
        {
            if(n=="Cruisers")
            {
                if(n1/2>=t1)cout<<"Naebbirac\n";
                else cout<<"Tobby\n";
            }
            if(n=="Battleships")
            {
                if(t1/2>=n1)cout<<"Tobby\n";
                else cout<<"Naebbirac\n";
            }
        }
        if(t=="Cruisers")
        {
            if(n=="Battleships")
            {
                if(n1/2>=t1)cout<<"Naebbirac\n";
                else cout<<"Tobby\n";
            }
            if(n=="Destroyers")
            {
                if(t1/2>=n1)cout<<"Tobby\n";
                else cout<<"Naebbirac\n";
            }
        }
    }

    return 0;
}
