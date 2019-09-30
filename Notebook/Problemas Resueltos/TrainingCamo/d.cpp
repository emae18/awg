#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define DBG(x) cerr << #x << " = " << (x) << endl

const int MAXN = 50000;
bool criba[MAXN];

void fill_criba() {
	memset(criba,-1,sizeof(criba)); //seteo todos en true
	//esto es O(MAXN * log(log(MAXN)))
	criba[0]=false;
	criba[1]=false;
	for(int i=2;i<MAXN;i++) {
		if(criba[i]==true) {
			for(int j=2*i;j<MAXN;j+=i) {
				criba[j]=false;
			}
		}
	}
}

double cant_primes(int x, vector<int> d, int n){
    double cant = 0;
    for(int i = x; i <= n; i++){
        if(criba[d[i]]){
            cant++;
        }
    }
    return cant;
}

vector<int> bfs(int node, vector<vector<int>> v)
{
    vector<int> d(v.size(),-1);
    queue<int> q;
    d[node]=0;
    int c = 1;
    q.push(node);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int y : v[x]){
            if(d[y]==-1){
                d[y]=d[x]+1;
                q.push(y);
            }
        }
    }
    return d;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    fill_criba();
    vector<vector<int>> graph;

    cin >> n;

    int m = n - 1;
    graph.resize(n + 1);
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    double choices = ((n - 1)*n) / 2;
    vector<vector<int>> distances(n + 1);
    // Amount of choice between two nodes that have a prime distance
    double cant = 0;

    for(int i = 1; i <= n; i++){
        distances[i] = bfs(i, graph);
        cant += cant_primes(i, distances[i], n);
    }
    double res = cant/choices;
    cout << fixed << setprecision(6) << res << "\n";

    return 0;
}
