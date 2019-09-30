#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    map<int,vector<pair<int,int >> > m;
    int id,tr;
    for(int i=0;i<n;i++){
        cin>>id>>tr;
        m[id].push_back({tr,i});
    }
     map<int,vector<pair<int,int >> >::iterator it =m.find(k);
    if(it!=m.end())
    {
        cout<<it->second[0].second+1<<"\n";
    }else
    {

    }

    return 0;
}
