#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
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
class OrderlyString{
public:

    int longestLength(string s)
    {
        string aux="",aux1="";
        forin(i,s.size()-1)
        {
            if(i)
            {
                if(s[i]>s[i-1] && s[i]>s[i+1] && s[i+1]>s[i-1])i++;
                else aux+=s[i];
            }else if(s[i]<=s[i+1])aux+=s[i];
        }
        if(*s.rbegin()>=s[s.size()-2] || aux.size()==0)aux+=*s.rbegin();
        forin(i,s.size())
            if(s[i]<=s[i+1])aux1+=s[i];
        if(aux1=="" || *s.rbegin()>=s[s.size()-2])aux1+=*s.rbegin();
        if(aux[0]>aux[1])aux="";
        if(aux1[0]>aux1[1])aux="";
        return max(aux.size(),aux1.size());
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;cin>>a;
    cout<<longestLength(a);
    return 0;
}
