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
typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> Comparator;

	// Defining a lambda function to compare two pairs. It will compare two pairs using second field
	Comparator compFunctor =
			[](std::pair<std::string, int> elem1 ,std::pair<std::string, int> elem2)
			{
				return elem1.second < elem2.second;
			};
int main()
{
    ios::sync_with_stdio(0);
   // cin.tie(0);
   int n;
   cin>>n;
   map<string, int> m;string k;
   string aux;int a;
   forin(i,n)
   {
        cin>>aux;
        m[aux]++;
        if(i){
            if(a<aux.size()){a=aux.size();k=aux;}
        }else{a=aux.size();k=aux;}
    }
    set<std::pair<std::string, int>, Comparator> s(
			m.begin(), m.end(), compFunctor);
    cout<<k<<"\n"<<s.rbegin()->first<<"\n";
    return 0;
}
