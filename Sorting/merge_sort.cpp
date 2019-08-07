void mergeSort(vector<int> &A, int start, int end){
	if(start<end){
		int mid=start+(end-start)/2;

		mergeSort(A,start,mid);
		mergeSort(A,mid+1,end);

		merge(A,start,mid,end);
	}
}

void merge(int start, int mid, int end){
	int i,j,k;
	int n1 = mid-left+1;
	int n2 = end-mid;

	int left[n1];
	int right[n2];

	i=0;
	j=0;
	k=start;

	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			A[k]=left[i];
			i++;
		}
		else{
			A[k]=right[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		A[k]=right[i];
		i++;
		k++;
	}

	while(j<n2){
		A[k]=left[j];
		j++;
		k++;
	}
}

