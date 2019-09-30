#include<bits/stdc++.h>
#define fori(i,n) for(long long i=0;i<n;i++)
#define foritset(i,n) for(set<long long>::iterator i=n.begin();i!=n.end();i++)

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
    long long n,k;
    cin>>n>>k;
    multiset<long long> se;
    long long a[n];long long s[k];
    //map<long long,vector<pair<long long,long long> > m;
    fori(i,n)
    {cin>>a[i];
        if(i)
        {
            for(long long j=i-1;j>-1;j--)
                se.insert(a[i]+a[j]);
             //   m[a[i]+a[j]].push_back{min(a[i],a[j]),max(a[i],a[j])};
        }
    }
    map<long long,set<long long>> mapa;
    fori(i,k)
    {cin>>s[i];
        mapa[se.count(s[i])].insert(s[i]);
    }
    map<long long,set<long long>>::reverse_iterator it=mapa.rbegin();
    while(it!=mapa.rend())
    {
        for(set<long long>::iterator i=it->second.begin();i!=it->second.end();i++)
        {
            cout<<*i<<" "<<it->first<<"\n";
        }
        it++;
    }

    //vector<pair<long long,long long> > v(fact(n),0);

    return 0;
}
