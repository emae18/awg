#include <bits/stdc++.h>
using namespace std;
int main()
{
    string v[3][10]={".***..","*.....","**....","**.*..","*..*..","*..*..","****..","*.**..",".**...",".***.."};
    map<string,int> m;
    m[".**.."]=0;m["*....."]=1;m["**...."]=2;m["**.*.."]=3;
    m["*..*.."]=4;m["*..*.."]=5;m["****.."]=6;m["*.**.."]=7;
    m[".**..."]=8;m[".***.."]=9;
    int n;char c;string k;
    cin>>n;int a;
    while(n!=0)
    {
        cin>>c;
        if(c=='S')
        {
            cin>>k;int z;
            for(int i=0;i<k.length();i++)
            {
                a=k[i] - '0';
                for(z=i;z<i+2;z++)
                {
                    cout<<v[a][z];
                }
            }
            cout<<"\n";
        }else if(c=='B'){
            string b[n];string aux;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>aux;
                    b[j]+=aux;
                }
            }
            map<string, int>::iterator it;

            for(int i=0;i<n;i++)
            {
                it=m.find(b[i]);
               cout<<it->second;
            }
            cout<<"\n";
        }
        cin>>n;
    }
    return 0;
}
