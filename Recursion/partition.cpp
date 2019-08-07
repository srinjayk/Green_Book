bool partitionSum(vector<int> &A){
	int sum=0;
	for(int i=0;i<A.size();i++) sum=sum+A[i];

	if(sum%2==0) return false;
	
	return isSubset(A,sum/2, A.size());
}

bool isSubset(vector<int> &A, int sum, int n){
	if(sum==0) return true;
	if(A.size()==0 && sum!=0) return false;

	if(A[A.size()-1] > sum) return isSubset(A,sum,n-1);

	return isSubset(A,sum,n-1)||isSubset(A,sum-A[n-1],n-1);
}