#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
#define mostrar(x,v) for(auto x: v) cout<<x <<" ";
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int maxmin(vi work, string ch){
    int p;
    for(int i=0;i<work.size();i++){
            if(i<work.size()-1 && work[i]<ch[0] && work[i+1] > ch[0]){
                p = i;
            }
        }
    return p;
}
int main(){
    int nDwork, btn,i;
    string ch, nch, m, M;
    vi dwork,work;
    cin >> nDwork;
    while(nDwork--){
        cin >> btn;
        dwork.push_back(btn);
    }
    for(i=0;i<10;i++){
        if(!count(dwork.begin(),dwork.end(),i)){
            work.push_back(i);
        }
    }

    cin >> ch;
    //dig 1
    if(count(work.begin(),work.end(),ch[0])){
        nch += ch[0];
        //dig 2
        /*
        if(ch.size()>1){
            if(cout(work.begin(),work.end(),ch[0])){
                nch += ch[0];
            }*/


    }else{
        i = maxmin(work, ch);
        m = work[i];
        M += work[i+1];
        for(i=1;i<ch.length();i++){
            m+= work[0];
            M+= work[work.size()-1];
        }
        cout << m << " " << M << endl;
        //cout << min(abs(stoi(ch)-stoi(m)),abs(stoi(ch)-stoi(M))) << "\n";
        /*
        for(i=0;i<work.size(),i++){
            i1f(i<work.size()-1 && work[i]<ch[0] && work[i+1]){
                m += work[i];
                M += work[i+1];
            }
        }
        m+= work[0];
        M+= work[work.size()];
        */
    }



    //dig 3

    return 0;
}
