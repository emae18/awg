    #include<bits/stdc++.h>
    #define forin(i,n) for(int i=0;i<n;i++)
    #define forisn(i,s,n) for(int i=s;i<n;i++)
    using namespace std;
    bool c[110];
    void criba(){
        memset(c, true, sizeof(c));
        c[0]=false;
        c[1]=false;

        for(int i=2;i<110;i++){
            if(c[i]){
                for(int j=i*2;j<110;j+=i){
                    c[j]=false;
                }
            }
        }
    }
    int main()
    {
        criba();
        int n;
        cin>>n;
        int v[101];
        for(int i = 0; i < 101; i++)
        {
            v[i] = i;
        }
        int minValue = 0;
        int a;

        vector<int> values;
        set<int> primos;
        forin(i,n){
            cin>>a;
            values.push_back(a);

            if(c[a]) primos.insert(a);
            if(minValue == 0) minValue = a;
           /* if(a == 1) {
                cout << 1;
                return 0;
            }*/
                for(int j = a; j < 101; j+=a)
                {

                    if(v[j] != j) continue;
                    v[j] = a;
                }
                min(minValue, a);



        }

        set<int> pints;
        for(auto i : values)
        {
            pints.insert(v[i]);
            cout << v[i] << " ";
        }
        cout << endl;
    //    for(int i = 1; i < 101; i++) pints.insert(v[i]);
        if(primos.size() == 0) cout << (int)pints.size();
        else cout << max((int) primos.size(), (int) pints.size());
    /*    int ans = min(primos, (int) pints.size());
        cout<<ans<<"\n";*/
        return 0;
    }
