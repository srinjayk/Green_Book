int numberofPaths(int m, int n){
	if(m==1 || n==1) return 1;
	return numberofPaths(m,n-1) + numberofPaths(m-1,n);
}