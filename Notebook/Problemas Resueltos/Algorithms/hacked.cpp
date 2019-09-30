#include<bits/stdc++.h>
using namespace std;
int  main()
{

    int t;
    cin>>t;
    while(t--)
    {



   long long int n,k;
   cin>>n>>k;
   long long int ans=0;
   while(n)
   {
       if(n%k)
       {
           long long int x=n%k;
           ans+=x;
           n-=x;
       }
      while(n%k==0 && n!=0)
      {
          ans++;
          n/=k;
      }

   }
   cout<<ans<<endl;
}
}
