//type cast for point
typedef pair<int,int> ii;
//type cats for array of points
typedef vector<ii> vii;
//vector of integers
typedef vector<int> vi;

int main(){
	//declare the edge with weight and the two edges
	std::vector<pair<int,ii> EdgeList;
	//iterate and store each edge
	for(int i=0;i<E;i++){
		cin >> u >> v >> w;
		EdgeList.push_back(make_pair(w,ii(u,v)));
	}
	//sort based on the weight
	sort(EdgeList.begin(), EdgeList.end());

	//initialise the cost to 0
	int mst_cost=0;
	//initially all are disjoint sets
	UnionFind UF(V);
	for(int i=0;i<E;i++){
		//front is the current edge and weigth pair
		pair<int,ii> front=EdgeList[i];
		//check is they are already in the same set
		if(!UF.isSameSet(front.second.first, front.second.second)){
			//if not then combine them and unionize them
			mst_cost = mst_cost + front.first;
			UF.unionSet(front.second.first, front.second.second);
		}
	}
}