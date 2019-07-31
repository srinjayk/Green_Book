int numberofPths(int m, int n){
	int count[m][n];

	for(int i=0;i<m;i++) count[i][0]=0;
	for(int i=0;i<n;i++) count[0][j]=0;

	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			count[i][j]=count[i-1][j]+count[i][j-1];
		}
	}
	return count[m-1][n-1];
}