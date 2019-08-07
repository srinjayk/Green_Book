//type cast for point
typedef pair<int,int> ii;
//type cats for array of points
typedef vector<ii> vii;
//vector of integers
typedef vector<int> vi;

int main(){
	queue<int> q;
	q.push(s);
	vi color(V,INT_MAX);
	bool isBipartite = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int j=0;j<AdjList[u].size();j++){
			ii v = AdjList[u][j];
			if(color[v.first]==INT_MAX){
				color[v.first] = 1-color[u];
				q.push(v.first);
			}
			else if(color[v]==color[u]){
				isBipartite=false;
				break;
			}
		}
	}
}