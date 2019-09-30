#include<iostream>
using namespace std;
long long conejosF(long long n,long long c[])
{
    if(n==1 || n==2)return 1;
       else
       {
        c[2]=c[1]+c[0];
        c[1]=c[0];
        c[0]=c[2];
        conejosF(n-1,c);
        return c[0]+c[1];

       }

}
long long vConejos(long long n)
{
    long long conejos[3];
    conejos[0]=1;
    conejos[1]=1;
    return conejosF(n,conejos);
}
int main()
{
    int n;
    cin>>n;
   /* 0primer+1luz+0adulto//1->1
    0primer+0luz+1adulto//2->1
    1primer+1luz+0adulto//3->2
    1primer+1luz+1adulto//4->3
    2primer+2luz+1adulto)//5->5;
    3primer+3luz+2adulto//6->8;
    5primer+5luz+3adultos//7->13
    8primer+8luz+5adulto//8->21
    13primer+13luz+8adulto//9->34
    21primer+21luez+13adutlo//10->55*/
    cout<<vConejos(n-1);
}
