#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<n;i++)

using namespace std;
const double pi=3.14159;
int may(int a,int b){
    return (a+b+abs(a-b))/2;}
double dist(double x1,double y1,double x2,double y2){
    return pow(pow((x2-x1),2)+pow((y2-y1),2),1/2.0);}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;double x;
    while(n--)
    {
        cin>>x;int cont=0;
        while(x>1.00)
        {
            x=x/2.00;
            cont++;
        }
        cout<<cont<<" dias\n";
    }
    return 0;
}
