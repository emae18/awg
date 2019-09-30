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

int sum(int a)
{ int sum=0;
    while(a)
    {
        sum+=a%10;
        a=a/10;
    }
 return sum;
}
bool sum_di(int n){
    int sum2 = 0;
    for(int i=n;i>0;i=i/10){
        sum2 = sum2 + i%10;
    }
    //cout<<sum2<<endl;
    if(sum2%4==0)
        return true;
    else
        return false;
}
int k(int a)
{
         int b = a;
	    while(1){
	       if(sum_di(b)){
	           return b;
	           break;
	       }
	       b++;
	    }


}
int m(int a)
{
    vi v;
    forin(i,1004)
    {
        int n=0,k=i;
        while(k/10!=0)
        {
            n+=k%10;
            k/=10;
        }
        n+=k%10;
        if(n%4==0)v.push_back(i);
    }
    //mostrar(x,v);cout<<"\n";
    return *lower_bound(all(v),a);
}

int main(){
    for(int i=1;i<1001;i++)
    {
        if(m(i)!=k(i))cout<<"aqui\n";
        cout<<i<<" : this "<<k(i)<<" -mio "<<m(i)<<"\n";
    }

    for(int i=1;i<1001;i++)
    {
      //  cout<<i<<" : ";
    //    m(i);
    }
return 0;}
