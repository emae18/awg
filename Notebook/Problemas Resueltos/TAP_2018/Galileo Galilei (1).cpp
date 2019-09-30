#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;int a,b;
    cin>>n;
    vector<pair<int, int> > rec;
    vector<pair<int, int> > p;
    forin(i,n)
    {
        cin>>a>>b;
        if(i){
            forin(j,p.size())
                rec.push_back({a-p[j].first,b-p[j].second });
        }
        p.push_back({a,b});
    }
    multiset<double> ms;
    //cout << rec.size()<<endl;
    vector<pair<int,int> > punTri;
    forin(i,rec.size())
    {
        forisn(j,i,rec.size())
        {
            //cout<<"x1: "<<rec[i].first<<"y1: "<<rec[i].second<<" x2: " <<rec[j].first<<" y2: " <<rec[j].second<<"\n";
            ms.insert((rec[i].first*rec[j].first)+(rec[i].second*rec[j].second));
        }
    }
    cout<<ms.count(0)<<"\n";
    return 0;
}
