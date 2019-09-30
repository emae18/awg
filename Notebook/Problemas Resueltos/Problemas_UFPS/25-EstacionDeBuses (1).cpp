#include <bits/stdc++.h>
#include <ctype.h>
#include<string.h>
#include<algorithm>
#include<set>
#include<vector>
#include<deque>
using namespace std;
 int main()
 {
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	//freopen("carga.in","r",stdin);
    int n,b;
    cin>>n;
    while(n>0){
        cin>>b;
        pair<int,int> v[b];
        int k=0;
        int coles[b/2];
        pair<int,int> aux;
        for(int i=0;i<b;i++)
        {
            cin>>v[i].first>>v[i].second;
            if(v[i].first == 1){coles[k]=v[i].second;k++;}
        }
        for(int i=0;i<b/2;i++)
        {
            cout<<coles[i]<<"\n";
        }
        n--;
    }
    return 0;
}
