    #include<bits/stdc++.h>
    #define forin(i,n) for(int i=0;i<(int)n;i++)
    using namespace std;
    typedef long long ll;
    const ll NMAX=10000000001;
    int main()
    {
        int n;
        cin>>n;
        string sec="11212312341234512345612345671234567812345678912345678910";
        string ult="12345678910";
        ll k=10LL;
        while(sec.size()<NMAX){
            ult+=to_string(k++);
            sec+=ult;
        }
        while(n--){
            ll aux;
            cin>>aux;
            cout<<sec[aux-1]<<"\n";
        }
    return 0;
    }
