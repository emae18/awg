#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<string> s;
    bool rep=false;
    cin>>n;string aux;
    fori(i,n)
    {
        cin>>aux;
        if(find(s.begin(),s.end(),aux)!=s.end())
            rep=true;
        s.push_back(aux);
    }
    int m;
    cin>>m;
    string pal,sig,est;
    if(rep)
    {
        while(m--)
        {
            cin>>pal>>sig>>est;
     //   dic[pal].push_back(make_pair(sig,est));
            dic[pal]++;
        }
    }
    map<string, vector<pair<string,string> > > dic;
    map<string, int> palabras;
    fori(i,n){
        palabras[s[i]]++;
    }
    for(map<string,int>::iterator it=palabras.begin();it!=palabras.end();it++)
    {
        if(*it->second>1)
        {
            dic[*it->first]
        }
    }
    return 0;
}
