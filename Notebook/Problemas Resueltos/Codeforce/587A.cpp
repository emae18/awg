    #include<bits/stdc++.h>
    #define forin(i,n) for(int i=0;i<(int)n;i++)
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int a=0,b=0;
        string aux;
        cin>>aux;
            int ic=0;
            if(n==2){
                if(aux[0]=='a'){
                    cout<<1<<"\nab"<<"\n";
                }
                if(aux[0]=='b'){
                    cout<<1<<"\nba"<<"\n";
                }
                return 0;
            }
            for(int i=2;i<n;i++){
                if(aux[i-1]==aux[i] && aux[i]==aux[i-2] && aux[i]=='a'){
                    aux[i-1]='b';
                    ic++;
                }
                else if(aux[i-1]==aux[i] && aux[i]==aux[i-2] && aux[i]=='b'){
                    aux[i-1]='a';
                    ic++;
                }
                else if(aux[i]=='a' && aux[i-1]=='a' && aux[i-2]=='b'){
                    ic++;
                    aux[i]='b';
                }
                else if(aux[i]=='b' && aux[i-1]=='b' && aux[i-2]=='a'){
                    ic++;
                    aux[i]='a';
                }
            }
            cout<<ic<<"\n"<<aux<<"\n";
    return 0;
    }
