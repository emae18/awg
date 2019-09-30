#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;

unsigned long long fact(long long n)
{
    if(n==1 || n==0)return 1;
    else return fact(n-1)*n;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    multiset<long long> se;
    int a[n];int s[k];
    //map<int,vector<pair<int,int> > m;
    fori(i,n)
    {cin>>a[i];
        if(i)
        {
            for(int j=i-1;j>-1;j--)
                se.insert(a[i]+a[j]);
             //   m[a[i]+a[j]].push_back{min(a[i],a[j]),max(a[i],a[j])};
        }
    }
    map<int,set<int>> mapa;
    fori(i,k)
    {cin>>s[i];
        mapa[se.count(s[i])].insert(s[i]);
    }
    map<int,set<int>>::reverse_iterator it=mapa.rbegin();
    while(it!=mapa.rend())
    {
        for(set<int>::iterator i=it->second.begin();i!=it->second.end();i++)
        {
            cout<<*i<<" "<<it->first<<"\n";
        }
        it++;
    }

    //vector<pair<int,int> > v(fact(n),0);

    return 0;
}
