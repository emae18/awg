#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char a;string c;
    while(cin>>a>>c){
        if(a=='0' && c[0]=='0' )return 0;
        c.erase(remove(c.begin(),c.begin()+c.size(),a),c.end());
        while(c[0]=='0'){
            if(c.size()==1)break;
            c.erase(0,1);
        }
        if(c.size()==0)cout<<0<<"\n";
        else cout<<c<<"\n";
    }

    return 0;
}
