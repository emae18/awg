#include<bits/stdc++.h>
#include <string>
using namespace std;
int fact(int n)
{
    // Initialize result
    int count = 0;

    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}
int main()
{
    int n;int cont=1;
    do{
        cin>>n;
        if(n!=0)
            cout<<"Case #"<<cont++<<": "<<fact(n)<<"\n";
    }while(n);
    return 0;
}
