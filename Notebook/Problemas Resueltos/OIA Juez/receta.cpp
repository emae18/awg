#include<bits/stdc++.h>
using namespace std;
int batamon(vector<int> hechicera, vector<int> rival,vector<int> &enfrentamientos){
    map<int,vector<pair<int,bool> > > m;
    map<int,vector<pair<int,bool> > > m2;
    for(int i=0;i<hechicera.size();i++){
        m[hechicera[i]].push_back({i+1,false});
    }
    for(int i=0;i<rival.size();i++){
        m2[rival[i]].push_back({i+1,false});
    }
    int cont=0;
    sort(hechicera.begin(),hechicera.end());
    sort(rival.begin(),rival.end());
    for(auto x :rival){
        if(lower_bound(hechicera.begin(),hechicera.end(),x)!=hechicera.end()){
            cont++;

        }
    }
    return cont;
}

static void leerVector(vector<int> &v, int N)
{
    for (int i=0;i<N;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> hechicera, rival;
    leerVector(hechicera, N);
    leerVector(rival, N);
    vector<int> enfrentamientos;
    cout << batamon(hechicera, rival, enfrentamientos) << endl;
    for (int i=0;i<int(enfrentamientos.size());i++)
    {
        if (i>0) cout << " ";
        cout << enfrentamientos[i];
    }
    cout << endl;
    return 0;
}

