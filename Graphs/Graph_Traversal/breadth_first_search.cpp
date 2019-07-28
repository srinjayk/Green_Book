//type cast for point
typedef pair<int,int> ii;
//type cats for array of points
typedef vector<ii> vii;
//vector of integers
typedef vector<int> vi;


int main(){

	//initialise all the distance to infinite
	vi d(V,INT_MAX);
	//the distance for the source vertex is 0
	d[s] = 0;
	//make a queue aand push the source vertex in it
	queue<int> q;
	q.push_back(s);

	//loop till the queue is not empty
	while(!q.empty()){
		//u is the front element of the queue
		int u = q.front();
		//remove the first element of the queue
		q.pop();
		//AdjList[u] contains the pair (vertex,weight) that are connected to the 
		// vertex u
		for(int j=0;j<AdjList[u][j].size();j++){
			ii v = AdjList[u][j];
			//if the vertex is not visited
			if(d[v.first]==INT_MAX){
				//increase the distance by one
				d[v.first]=d[u]+1;
				//push the vertex further into the queue to further carry out the process for this vertex
				q.push(v.first);
			}
		}
	}
}