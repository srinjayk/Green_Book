int binarySearch(vector<int> &A, int a, int start, int end){
	while(start<=end){
		int mid=l+(r-l)/2;
		if(A[mid]==b) return mid;
		else if(A[mid]>a) end=mid-1;
		else start=mid+1;
	}
}