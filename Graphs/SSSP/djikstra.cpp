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
	//initialise the dist array
	vi dist(V,INF);
	//source distance is zero
	dist[s]=0;
	//stored in the form (ditance,vertex)
	priority_queue<ii,vector<ii>,greater<ii>> pq;
	pq.push(ii(0,s));
	while(!pq.empty()){
		ii front = pq.front();
		pq.pop();
		int d = front.first;
		int u = front.second;
		if(d>dist[u]) continue;
		for(int j=0;j<AdjList[u];j++){
			ii v = AdjList[u][j];
			if(dist[u]+v.second<dist[v.first]){
				dist[v.first] = dist[u]+v.second;
				pq.push(ii(dist[v.first],first));
			}
		}
	}
}