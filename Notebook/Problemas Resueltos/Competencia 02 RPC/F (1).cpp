#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<int(n);i++)
#define forit(i,n) for(typeof n.begin() i=n.begin();i!=n.end();i++)
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string dig;
    cin>>dig;
    map<int,int> di;int aux;
    map<int,int>::iterator it; string cad="";
    fori(i,dig.size())
    {
        if(dig[i]=='0')
        {
            for(map<int,int>::iterator ti=di.begin();ti!=di.end();ti++)
            {
                cad=to_string(ti->first)+dig[i];
                    stringstream geek(cad);
                int q=0;
                geek>>q;
                di[q]++;
            }
        }
        it=di.find(dig[i]-'0');
        if(it!=di.end())
        {
            aux=(dig[i]-'0') + 10*it->second;
            di[aux]++;
            aux=(dig[i]-'0') + 20*it->second;
            di[aux]++;
            aux=(dig[i]-'0') + 30*it->second;
            di[aux]++;
            aux=(dig[i]-'0') + 40*it->second;
            di[aux]++;
            aux=(dig[i]-'0') + 50*it->second;
            di[aux]++;
            aux=(dig[i]-'0') + 60*it->second;
            di[aux]++;
            aux=(dig[i]-'0') + 70*it->second;
            di[aux]++;

            aux=(dig[i]-'0') + 80*it->second;
            di[aux]++;

            aux=(dig[i]-'0') + 90*it->second;
            di[aux]++;
            aux=(dig[i]-'0') + 100*it->second;
            di[aux]++;

        }else
        di[dig[i]-'0']++;
    }
    map<int,int>::iterator pp=di.begin();
    /*while(pp!=di.end())
    {
        cout<<pp->first<<" ";
        pp++;
    }*/
    cout<<"\n";
    unsigned long long k=1;
    while(k)
    {
        if(di.find(k)!=di.end())k++;
        else break;
    }
    cout<<k<<"\n";
    return 0;
}
