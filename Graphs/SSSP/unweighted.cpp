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
	queue<int> q;
	vi p;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int j=0;j<AdjList[u].size();j++){
			ii v = AdjList[u][j];
			if(dist[v.first]==INF){
				dist[v.first] = d[u]+1;
				p[v.first] = u;
				q.push(v.first);
			}
		}
	}
	//call from vertex t
	printPath(t);
}