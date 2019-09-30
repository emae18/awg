#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<string, string> >bd;
    int n;cin>>n;
    int id;string est,dir;
    bd.push_back(make_pair("0","2"));
    for(int i=0;i<n;i++)
    {
        cin>>id>>est>>dir;
        bd.push_back(make_pair(est,dir));
    }
    int m;
    cin>>m;int k;
    while(m--)
    {
        cin>>k;
        if(k>bd.size()|| k<1)cout<<"INEXISTENTE\n";
        else{
        if(bd[k].first=="D"){cout<<"SI "<<bd[k].second<<"\n";
            bd[k].first="C";
        }
        else if(bd[k].first=="C" || bd[k].first=="ER"|| bd[k].first=="E")cout<<"NO\n";
        else cout<<"INEXISTENTE\n";
        }
    }
    return 0;
}
