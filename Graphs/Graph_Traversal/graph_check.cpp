//type cast for point
typedef pair<int,int> ii;
//type cats for array of points
typedef vector<ii> vii;
//vector of integers
typedef vector<int> vi;

//initialise this global to array to 0 in the main
vi dfs_num;
vi dfs_parent;

void graphCheck(int u){
	//Change the state to ekplored as it has been discovered
	dfs_num[u]=EXPLORED;
	//iterate for all the vertices connected to u
	for(int j=0;j<(int)AdjList[u].size();j++){
		ii v = AdjList[u][j];
		// Tree Edge, EXPLORED->UNVISITED
		if(dfs_num[v.first]==UNVISITED){
			//parent is me
			dfs_parent[v.first]=u;
			graphCheck(v.first);
		}
		// EXPLORED->EXPLORED
		else if(dfs_num[v.first]==EXPLORED){
			//to differentiate between the two cases
			if(v.first==dfs_parent[u]){
				cout << "Two ways" << u << v.first << "-" << v.first << u << endl;
			}
			else{
				// the most frequent application: check if the graph is cyclic
				cout << "Back Edge" << u << v.first << endl;
			}
		}
		// EXPLORED->VISITED
		else if(dfs_num[v.first]==VISITED){
			cout << "Forward/Cross Edge" << u << v.first << endl;
		}
		//change the state to visited since all the vertices have been visited
		dfs_num[u]=VISITED;
	}
}


int main(){
	//initialise the two vectors
	dfs_num.assign(V,UNVISITED);
	dfs_parent.assign(V,0);
	for(int i=0;i<V;i++){
		//check the graph if the edge is not visited
		if(dfs_num[i]==UNVISITED){
			cout << "Component" << numComp << graphCheck(i);
			numComp++;
		}
	}
}