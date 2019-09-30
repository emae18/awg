#include <bits/stdc++.h>
#include <ctype.h>
#include<string.h>
#include<algorithm>
#include<set>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<vector>
#include<math.h>
using namespace std;
    map<int, pair<int,int> > pos;
    vector<vector<int> > caminos;

void mostrarMatriz(vector<vector<int> > v){
    for(int i=0; i<8;i++){
            for(int j=0;j<8;j++)cout<<v[i][j]<<" ";
            cout<<"\n";
        }
}
void twoHozRightOneVerUp(vector<vector<int> > &v,int num,pair<int,int> ij){
    v[ij.first-1][ij.second+2]=num;
}
void twoHozRightOneVerDown(vector<vector<int> > &v,int num,pair<int,int> ij){
    v[ij.first+1][ij.second+2]=num;
}
void twoHozLeftOneVerUp(vector<vector<int> > &v, int num,pair<int,int> ij){
    v[ij.first-1][ij.second-2]=num;
}
void twoHozLeftOneVerDown(vector<vector<int> > &v,int num,pair<int,int> ij){
    v[ij.first+1][ij.second-2]=num;
}
void oneHozRightTwoVerUp(vector<vector<int> > &v,int num,pair<int,int> ij){
    v[ij.first-2][ij.second+1]=num;
}
void oneHozRightTwoVerDown(vector<vector<int> > &v,int num,pair<int,int> ij){
    v[ij.first+2][ij.second+1]=num;
}
void oneHozLeftTwoVerUp(vector<vector<int> > &v,int num,pair<int,int> ij){
    v[ij.first-2][ij.second-1]=num;
}
void oneHozLeftTwoVerDown(vector<vector<int> > &v,int num,pair<int,int> ij){
    v[ij.first+2][ij.second-1]=num;
}
bool isMagical(vector<vector<int> > v){
    vector<int> rows;
    vector<int> cols;
    for(int i=0;i<8;i++)
    {
        rows.push_back(v[i][0]+v[i][1]+v[i][2]+
                       v[i][3]+v[i][4]+v[i][5]+
                       v[i][6]+v[i][7]);

    }
    for(int i=0;i<8;i++)
    {
        cols.push_back(v[0][i]+v[1][i]+v[2][i]+
                       v[3][i]+v[4][i]+v[5][i]+
                       v[6][i]+v[7][i]);
    }
    for(int i=0;i<rows.size();i++){
        if(rows[i]!=cols[i])return false;
    }
    return true;
}

void llenarMatriz(vector<vector<int> > &v){
    vector<vector<int> > copia=v;
    vector<int> camino;
    int num=v[0][0];
    while(!isMagical(v))
    {
        pair<int, int> xy;
        if(pos.find(num)!=pos.end())xy=pos.find(num)->second;
        if(xy.first<1 || xy.second<1){
            if(xy.first<1 && xy.second<1){
                if(v[xy.first+1][xy.second+2]==-1 && v[xy.first+2][xy.second+1]==-1)
            }
        }
        if( xy.first>6 || xy.second>6){}
    }
    //cout<<"num: "<<num<<"\n";
}
 int main()
 {
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	freopen("carga.in","r",stdin);
 	int n,p;
    cin>>n;int aux;
    while(n--){
        cin>>p;
        vector<int> fil;
        vector<vector<int> > matriz;
        for(int i=0; i<8;i++){
            for(int j=0;j<8;j++){
            cin>>aux;
            fil.push_back(aux);
            if(aux!=-1)
                {
                    pos[aux].first=i;
                    pos[aux].second=j;
                }
            }
            matriz.push_back(fil);
            fil.resize(0);
        }
        llenarMatriz(matriz);
        cout<<p<<"\n";
        mostrarMatriz(matriz);
    }


    return 0;
}
