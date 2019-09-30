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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n1,n2,n3;
    string s1,s2,s3;

    while(cin>>n1>>s1>>n2>>s2>>n3>>s3)
    {
        if(n1==-1 && n2==-1 && n3==-1
           && s1=="*" && s2=="*" && s3=="*")break;
        msi m;
        if(n1==12 || n1==11 || n1==10 )n1-=n1;
        if(n2==12 || n2==11 || n2==10 )n2-=n2;
        if(n3==12 || n3==11 || n3==10 )n3-=n3;
        m[s1]+=n1;
        m[s2]+=n2;
        m[s3]+=n3;
        if(m.size()==3)
        {
            if(m[s1]==0 && m[s2]==0 && m[s3]==0){cout<<7<<"\n";continue;}
            if(m[s1]>m[s2] && m[s1]>m[s3]){cout<<(m[s1]+13)%7<<"\n"; continue;}
            if(m[s2]>m[s1] && m[s2]>m[s3]){cout<<(m[s2]+13)%7<<"\n"; continue;}
            if(m[s3]>m[s1] && m[s3]>m[s2]){cout<<(m[s3]+13)%7<<"\n"; continue;}
        }else if(m.size()==2)
        {
            int sum=0;
            for(auto x : m)
                sum+=x->second;
            if(sum==0)
            {
                cout<<7<<"\n";
                continue;
            }
            if(m.begin()->second>m.rbegin()->second)
            {

            }

        }else{
            cout<<0<<"\n";continue;
        }
    }

    return 0;
}
