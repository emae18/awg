#include <bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
using namespace std;
int n,num;
int main(){
    vector <int> even;
    vector<int> odd;
    cin>>n;
   forin(i,n){
        cin>>num;
        if(num%2==0) even.push_back(num);
        else odd.push_back(num);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(),greater<int> ());
    forin(i,even.size())cout<<even[i]<<"\n";
    forin(i,odd.size())cout<<odd[i]<<"\n";
    return 0;
}
