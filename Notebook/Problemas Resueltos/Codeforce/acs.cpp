#include<bits/stdc++.h>
using namespace std;
vector<int> primos;
vector<int> v(110000);
void b(){
    for(int i=2;i<=110000;i++){
        if(v[i]==0){
            for(int j=i+i;j<=110000;j+=i)v[j]=1;
            primos.push_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}
