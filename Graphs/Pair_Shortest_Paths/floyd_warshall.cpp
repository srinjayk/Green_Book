/type cast for point
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

	//Adj Mat contains the weight of the edge between i and j
	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				AdjMat[i][j] = min(AdjMat[i][j], AdjMat[i][k] + AdjMat[k][j]);
			}
		}
	}
}