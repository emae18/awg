#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;string aux;
    map<char,int> m1;map<char,int> m2;set<char> s;
    forin(i,n)
    {
        cin>>aux;
        s.insert(aux[0]);
        if(m1.find(aux[0])==m1.end() && m2.find(aux[0])==m2.end())
            m1[aux[0]]++;
        else if(m1.find(aux[0])!=m1.end() && m2.find(aux[0])==m2.end())
            m2[aux[0]]++;
        else if(m2.find(aux[0])!=m2.end() && m1.find(aux[0])==m1.end())
            m1[aux[0]]++;
        else
        {
            if(m1[aux[0]]>m2[aux[0]])
                m2[aux[0]]++;
            else m1[aux[0]]++;
        }
    }

    int sum=0;
    map<char,int>::iterator it1=m1.begin();
    map<char,int>::iterator it2=m2.begin();
    while(it1!=m1.end()){
        if(it1->second%2!=0 && it1->second>1)
        {
            sum+=2*(it1->second%2);
        }
        sum+=(it1->second/2);
        it1++;
    }
    while(it2!=m2.end()){
        if(it2->second%2!=0 && it2->second>1)
        {
            sum+=2*(it2->second%2);
        }
        sum+=(it2->second/2);
        it2++;
    }
    cout<<sum<<"\n";
   return 0;
}

