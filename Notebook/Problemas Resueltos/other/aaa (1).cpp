#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,p,sz;
	string str;
	char c;
	cin>>str;
	vector<int> indices[128];
	for(int i=0;i<str.size();i++)indices[str[i]].push_back(i);
    cin>>q;
    while(q--)
    {
        cin>>c>>p>>sz;
        auto it = lower_bound(indices[c].begin(),indices[c].end(),p);
        if(it != indices[c].end() && *it >= p && *it <=p + sz-1)
        cout<<1<<"\n";
        else
        cout<<0<<"\n";
    }
	return 0;
}
