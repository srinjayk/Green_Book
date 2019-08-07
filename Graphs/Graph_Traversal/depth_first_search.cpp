//type cast for point
typedef pair<int,int> ii;
//type cats for array of points
typedef vector<ii> vii;
//vector of integers
typedef vector<int> vi;


//initialise this global to array to 0 in the main
vi dfs_num;

void dfs(int u){
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
}