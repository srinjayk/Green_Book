int binarySearch(vector<int> &A, int a, int start, int end){
	if(start<=end){
		int mid=l+(r-l)/2;
		if(A[mid]==a) return mid;
		else if(A[mid]>a) return binarySearch(A,a,start,mid-1);
		else return binarySearch(A,a,mid+1,end);
	}
}