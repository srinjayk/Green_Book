int lcs(string A, string B){
	int n=A.size();
	int m=B.size();

	int dp[n+1][m+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0) dp[i][j]=0;
			else if(j==0) dp[i][j]=0;
			else if(A[i]==B[j]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[n][m];
}