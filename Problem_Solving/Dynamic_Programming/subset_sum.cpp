bool isSubsetSum(vector<int> &A, int sum){
	int n=A.size();
	bool subset[sum+1][n+1];

	for(int i=0;i<=n;i++) subset[0][i]=true;
	for(int i=1;i<=sum;i++) subset[i][0]=false;

	for(int i=1;i<=sum;i++){
		for(int j=0;j<=n;j++){
			if(sum<A[j-1]) subset[i][j]=subset[i][j-1];
			else subset[i][j]=subset[i][j-1]||subset[i-A[j-1]][j-1];
		}
	}
	return subset[sum][n];

}