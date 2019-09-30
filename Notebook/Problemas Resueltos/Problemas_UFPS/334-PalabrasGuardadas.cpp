#include <bits/stdc++.h>
#include <ctype.h>
#include<string.h>
#include<algorithm>
#include<set>
using namespace std;
 int main()
 {
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	int t,n;
 	cin>>t;
 	while(t>0){
        cin>>n;
        set<string, greater<string> >c;
        int i=0;
        while(i<n){
            string v;
            cin>>v;
            transform(v.begin(), v.end(), v.begin(), (int(*)(int))toupper);//palabra de minuscula a mayus
            c.insert(v);
            i++;
        }
        /*set<string>::iterator it;
        for( it=c.begin(); it!=c.end();it++)
        {
            cout<< *it<<"\n";
        }*/
       //it=c.end();
        /*while(it--!=c.begin()){
            cout<<*it<<"\n";
        }*/

        t--;
 	}
 	return 0;
 }
