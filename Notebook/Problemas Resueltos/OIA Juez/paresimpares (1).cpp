#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;
const double pi=3.14159;
int may(int a,int b){
    return (a+b+abs(a-b))/2;}
double dist(double x1,double y1,double x2,double y2){
    return pow(pow((x2-x1),2)+pow((y2-y1),2),1/2.0);}
bool triangulo(double a,double b,double c)
{
    if((a < b+c) && (b<a+c) && (c<a+b))return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
   // cin.tie(0);
   int n;
   cin>>n;int sum=0;
   forisn(i,1,n+1){
        if(i%2==0)sum+=i;
        else sum-=i;
    }
    cout<<sum<<"\n";
    return 0;
}
