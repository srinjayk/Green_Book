//type cast for point
typedef pair<int,int> ii;
//type cats for array of points
typedef vector<ii> vii;
//vector of integers
typedef vector<int> vi;

//to avoid making a cycle
vi taken;

//to help chose shorter edges
priority_queue<ii>pq;

void process (int vertx){
	taken[vertx] = 1;
	for(int j=0;j<AdjList[vertx].size();j++){
		ii v = AdjList[vertx][j];
		if(!taken(v.first)){
			//-ve edges taken to reverse the order
			pq.push(ii((-v.second, -v.first)));
		}
	}
}


int main(){
	taken.assign(V,0);
	process(0);
	mst_cost = 0;
	while(!pq.empty()){
		ii front = pq.top(); 
		pq.pop();
		u = -front.second;
		w = -front.first;
		//if the graph is not taken then include it
		if (!taken[u]) {
			mst_cost = w + mst_cost;
			process(u);
		}
	}
}