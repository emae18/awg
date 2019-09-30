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
    int d;string n;string aux="";
    while(cin>>d>>n)
    {
        if(d==0)break;
        forin(i,n.size())
            if(n[i]-'0'!=d)aux+=n[i];
        unsigned long long p=0;
        forin(i,aux.size()){
            p+=((aux[i]-'0')*pow(10,(aux.size()-i+1)));
        }
        if(aux=="")cout<<0<<"\n";else
        cout<<p<<"\n";
        aux="";
    }

    return 0;
}
