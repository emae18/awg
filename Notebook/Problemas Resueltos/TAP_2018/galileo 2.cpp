#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;
bool esRect(double a,double b, double c)
{
    vector<double> k;
    k.push_back(a);
    k.push_back(b);
    k.push_back(c);
    sort(k.begin(),k.end());
    cout<<a<<" "<<b<<" "<<c<<"\n";
    return (pow(k[2],2)==pow(k[0],2)+pow(k[1],2));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;int a,b;
    cin>>n;
    vector<pair<int, int> > rec;
    vector<pair<int, int> > p;
    vector<double > lis;double la;
    forin(i,n)
    {
        cin>>a>>b;
        if(i>0){
            forin(j,p.size())
                la=sqrt(pow(a-p[j].first,2)+pow(b-p[j].second,2));
                cout<<la<<"\n";
                lis.push_back(la);
     //           rec.push_back({a-p[j].first,b-p[j].second,b-p[j].second });
        }
        cout<<a<<b<<"\n";
    }
    n=lis.size();int cont=0;
    cout<<n<<"\n";
    forin(i,n)
    {
        forisn(j,i+1,n)
        {
            forisn(z,i+2,n)
            {
                if(esRect(lis[i],lis[j],lis[z]))cont++;
            }
        }
    }
    cout<<cont<<"\n";
    multiset<double> ms;
    //cout << rec.size()<<endl;
    vector<pair<int,int> > punTri;
    /*forin(i,rec.size())
    {
        forisn(j,i,rec.size())
        {
            //cout<<"x1: "<<rec[i].first<<"y1: "<<rec[i].second<<" x2: " <<rec[j].first<<" y2: " <<rec[j].second<<"\n";
            ms.insert((rec[i].first*rec[j].first)+(rec[i].second*rec[j].second));
        }
    }
    cout<<ms.count(0)<<"\n";
    */
    return 0;
}
