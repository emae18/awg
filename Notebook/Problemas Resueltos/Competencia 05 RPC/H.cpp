#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
typedef function<bool(pair<char,int>,pair<char,int>)> Comparator;
Comparator comp =
[](pair<char,int> a,pair<char,int> b){
    return a.second<b.second;
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    int n;
    cin>>a>>n>>b;
    map<char,int> m1;
    map<char,int> m2;
    forin(i,a.size())
    {
        if(isdigit(a[i+1]) && isdigit(a[i+2]) && isdigit(a[i+3]) )
        {
            m1[a[i]]+=((a[i+1]-'0')*100)+((a[i+2]-'0')*10)+(a[i+3]-'0');
            i+=3;
        }
        else if(isdigit(a[i+1]) && isdigit(a[i+2]))
        {
            m1[a[i]]+=((a[i+1]-'0')*10)+(a[i+2]-'0');
            i+=2;
        }
        else if(isdigit(a[i+1]))
        {
            m1[a[i]]+=(a[i+1]-'0');
            i++;
        }
        else{
            m1[a[i]]++;
        }
    }
    forin(i,b.size())
    {
        if(isdigit(b[i+1]) && isdigit(b[i+2]) && isdigit(b[i+3]) )
        {
            m2[b[i]]+=((b[i+1]-'0')*100)+((b[i+2]-'0')*10)+(b[i+3]-'0');
            i+=3;
        }
        else if(isdigit(b[i+1]) && isdigit(b[i+2]))
        {
            m2[b[i]]+=((b[i+1]-'0')*10)+(b[i+2]-'0');
            i+=2;
        }
        else if(isdigit(b[i+1]))
        {
            m2[b[i]]+=(b[i+1]-'0');
            i++;
        }
        else{
            m2[b[i]]++;
        }
    }
    bool band=false;
    for(map<char,int>::iterator it=m2.begin();it!=m2.end();it++)
    {
        if(m1.find(it->first)==m1.end())
        {
            band=true;
            break;
        }
    }
    if(band)
    {
        cout<<0<<"\n";
        return 0;
    }
    int sum=0;
    set<int> s;
    for(map<char,int>::iterator it=m2.begin();it!=m2.end();it++)
    {
        s.insert((m1[it->first]*n)/(it->second));
    }
    cout<<*s.begin()<<"\n";
    /*set<int> menor;
    set<pair<char,int>,Comparator> s(m2.begin(),m2.end(),comp);
    menor.insert((m1[s.begin()->first]*n)/(s.begin()->second));
    menor.insert((m1[s.rbegin()->first]*n)/(s.rbegin()->second));
    cout<<*menor.begin()<<"\n";
    */
    return 0;
}
