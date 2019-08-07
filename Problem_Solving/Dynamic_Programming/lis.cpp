int lis(vector<int> &arr){
	int n=arr.size();
	int lis[n];
	for(int i=0;i<n;i++){
		lis[i]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j] && lis[j]>lis[i]+1) lis[i]=lis[j]+1;
		}
	}
	int maxm=INT_MIN;
	for(int i=0;i<n;i++) maxm=max(lis[i]);
		return maxm;
}