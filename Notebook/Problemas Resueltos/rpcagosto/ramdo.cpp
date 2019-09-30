#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[5]={"armella","izetta","urzagaste","polo","vilte"};
    srand(time(NULL));
    map<string,vector<int> > puntos;
    vector<int> repetidos;
    for(int i=0;i<10;i++)
    {
        int num=1+rand()%(11-1);
        if(find(repetidos.begin(),repetidos.end(),num)!=repetidos.end()){i--;continue;}
        repetidos.push_back(num);
        if(find(puntos[a[i%5]].begin(),puntos[a[i%5]].end(),num)==puntos[a[i%5]].end())
            puntos[a[i%5]].push_back(num);
    }
    for(auto x: puntos)
    {
        for(auto y : x.second)
        {
            cout<<x.first<<" -> "<<y<<"\n";
        }
    }
    return 0;
}
