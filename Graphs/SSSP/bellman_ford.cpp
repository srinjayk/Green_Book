//type cast for point
typedef pair<int,int> ii;
//type cats for array of points
typedef vector<ii> vii;
//vector of integers
typedef vector<int> vi;

void printPath(int u){
	if(u==s) {
		cout << s;
		return;
	}
	printPath(p[u]);
	cout << u;
}


int main(){
	vi dist(V,INF);
	dist[s]=0;
	for(int i=0;i<V-1;i++){
		for(int u=0;u<V;u++){
			for(int j=0;j<AdjList[u].size();j++){
				ii v = AdjList[u][j];
				dist[v.first] = min(dist[v.first], dist[u] + v.second);
			}
		}
	}

	bool hasNegativeCycle = false;
	for(int u=0;u<V;u++){
		for(int j=0;j<AdjList[u].size();j++){
			ii v = AdjList[u][j];
			if(dist[v.first] > dist[u]+v.second){
				hasNegativeCycle = true;
			}
		}
	}
}


