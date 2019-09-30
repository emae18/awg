#include<iostream>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
//loops and more
using namespace std;
//solve

int main()
{
    int t;
    cin>>t; int r,l;
    bool p=true;
    forisn(i,1,t+1)
    {
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            p=true;
            if(i==1)p=false;
            else if(i<=3)p=true;
            else{
                if(i%2==0 || i%3==0)p=false;
                for(int j=5;j*j<=i;j+=6)
                {
                    if(i%j==0 || i%(j+2)==0){
                        p=false;
                        break;
                    }
                }
            }
            if(p==true)
                cout<<i<<"\n";
        }
        cout<<"\n";
    }


    return 0;
}
