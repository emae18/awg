#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define DBG(x) cerr << #x << " = " << (x) << endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string cockroaches;
    cin >> n;
    cin >> cockroaches;
    int turns = 0;
    int i = 0;
    if(n == 2){
        if(cockroaches[n - 2] == cockroaches[n - 1]){
            if(cockroaches[n - 1] = 'r'){
                cockroaches[n - 1] = 'b';
            } else {
                cockroaches[n - 1] = 'r';
            }
            turns++;
        }
    }

    while(i < n - 2){
        if(cockroaches[i] != cockroaches[i + 1]){
            i++;
        } else {
            if(cockroaches[i + 1] != cockroaches[i + 2]){
                swap(cockroaches[i + 1], cockroaches[i + 2]);
                i += 2;
            } else {
                if(cockroaches[i + 1] == 'r'){
                    cockroaches[i + 1] = 'b';
                } else {
                    cockroaches[i + 1] = 'r';
                }
                i++;
            }
            turns++;
        }
        if (i == n - 2){
            if(cockroaches[n - 2] == cockroaches[n - 1]){
                if(cockroaches[n - 1] == 'r'){
                    cockroaches[n - 1] = 'b';
                } else {
                    cockroaches[n - 1] = 'r';
                }
                turns++;
            }
        }
    }

    cout << cockroaches << "\n";
    cout << turns << "\n";

    return 0;
}
