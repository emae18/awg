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
    long long n;

    cin>>n;
    string m;string aux="";
    cin.ignore();
    //while(cin>>n){
    while(n--)
    {
        getline(cin,m);
        long long mi=m.size()/2;
        fori(j,m.size())
            m[j]=(((int(m[j])>96 && int(m[j])<123)|| (int(m[j])>64 && int(m[j])<91))?char(int(m[j]+3)):m[j]);
        for(int j=m.size()-1;j>-1;j--)
            aux+=m[j];
        for(int j=mi;j<aux.size();j++)
            if(j>mi-1)aux[j]=char(int(aux[j])-1);
        cout<<aux<<"\n";
        aux="";
    }
    //}
    return 0;
}
