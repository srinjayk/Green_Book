//type cast for point
typedef pair<int,int> ii;
//type cats for array of points
typedef vector<ii> vii;
//vector of integers
typedef vector<int> vi;


//initialise this global to array to 0 in the main
vi dfs_num;
vi ts;

void dfs2(int u){
	//the corresponding vertex is made visited
	dfs_num[u] = 1;
	//AdjList[u] contains the pair (vertex,weight) that are connected to the 
	// vertex u
	for(int j=0; j<(int)AdjList[u].size(); j++){
		ii v = AdjList[u][j];
		//first of the pair will be the vertex
		if(dfs_num[v.first]==0){
			//recurse for the dfs of the corresponding vertex
			dfs(v.first);
		}
	}
	//store the vertices in the topological sort
	ts.push_back(u);
}

int main(){

	//clear the vector
	ts.clear();
	//initialise all the values to zero
	memset(dfs_num,0,sizeof(dfs_num));
	//iterate for all the vertices
	for(int i=0;i<V;i++){
		//if the vertex is not visited
		if(dfs_num[i]==0){
			//preform depth first search
			dfs2(i);
		}
	}
	//print the topological sort
	for(int i=ts.size()-1;i>=0;i--) 
		cout <<ts[i]<<" ";
	cout <<endl;
}