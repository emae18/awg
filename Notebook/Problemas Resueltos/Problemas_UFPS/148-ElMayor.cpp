#include<bits/stdc++.h>
using namespace std;

int main(){
    long long v[1000];
    pair<long long, long long > may;long long my=0;
    for(int i =0;i<100;i++)
    {
        cin>>v[i];
        if(v[i]>=my){
            my=v[i];
			may.first = v[i];
			may.second= i;
		}
    }
    cout<<may.first<<"\n"<<may.second+1<<"\n";
    return 0;

}
