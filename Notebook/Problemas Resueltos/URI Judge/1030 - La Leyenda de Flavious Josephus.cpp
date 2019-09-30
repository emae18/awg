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
    int nc;
    int n,k;
    cin>>nc;
    int aux;
    forin(j,nc)
    {
        cin>>n>>k;
        aux=k;
        vector<int> v(n,1);
        set<int> s;
        forin(a,n)s.insert(a);
        while(s.size()!=1)
        {
            if(v[aux-1]==0){if(aux>v.size())aux-=n;else aux++;continue;}
            v[aux-1]=0;
            s.erase(aux-1);

        }
        cout<<s.size()<<"\n";
        foritset(k,s)cout<<*k<<"\n";
        cout<<"Case "<<j<<": "<<*s.begin()<<"\n";
    }

    return 0;
}
