bool isPartition(vector<int> A){
	//initialise the sum to zero
	int sum=0;
	//int the n to the sum
	int n = A.size();
	//calculate the sum
	for(int i=0;i<n;i++) sum =sum+A[i];
	//if the sum is odd no solution is possible
	if(sum%2!=0) return false;
	
	//initialise the boolean array
	//ispatisum[i][j] whether i is sum with elements a1....aj
	bool isPartitionsum[sum/2+1][n+1];

	//if  the sum is zero
	for(int i=0;i<=n;i++) isPartitionsum[0][i]=true;
	//if the nu,ber of elements is false
	for(int i=1;i<=sum/2;i++) isPartitionsum[i][0]=false;

	for(int i=1;i<=sum/2;i++){
		for(int j=1;j<=n;j++){

			isPartitionsum[i][j] = isPartitionsum[i][j-1];
			//if the sum is greater
			if(i>=A[j-1]){
				isPartitionsum[i][j]=isPartitionsum[i][j]||isPartitionsum[i-arr[j-1]][j-1];
			}
		}
	}
	return isPartitionsum[sum/2][n];
}