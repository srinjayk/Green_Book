int partition(vector<int> &A, int start, int end){
	int pivot = A[end];
	int i = low-1;

	for(int j=start;j<=end;j++){
		if(A[j]<=pivot){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[end]);
	return (i+1);
}

void quickSort(vector<int> &A, int start, int end){
	if(low<high){
		int pi=partition(A,start,end);
		quickSort(A,start,pi-1);
		quickSort(A,pi+1,end);
	}
}