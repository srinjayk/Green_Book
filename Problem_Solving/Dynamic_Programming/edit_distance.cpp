int edit_distance(string str1, string str2){
	int m = str1.size();
	int n = str2.size();

	//tobulid up the solution
	int dp[m+1][n+1];

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			//if first is empty, insert all of second string
			if(i==0) dp[i][j]=j;
			//if second is empty remove all of first string
			else if(j==0) dp[i][j]=i;
			//if last char is equal, solve for the remaining array
			else if(str[i-1]==str[j-1]) dp[i][j]=dp[i-1][j-1];
			//if not equal then we have to doa operation and then find the minimum
			else dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
		}
	}
	return dp[m][n];
}