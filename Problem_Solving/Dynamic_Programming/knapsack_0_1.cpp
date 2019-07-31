int knapsack(int capacity, vector<int> &weight, vector<int> &value, int num){
	if(num==0 || capacity==0) return 0;
	if(weight[n-1]>capacity) return knapsack(capacity,weight,value,n-1);
	else return max(knapsack(capacity-weight[n-1],weight,value,n-1),knapsack(capacity,weight,value,n-1));
}


int knapsack(int capacity, vector<int> &weight, vector<int> &value, int num){
	int knapsack[capacity+1][num+1];

	for(int i=0;i<=capacity;i++){
		for(int j=0;j<=num;j++){
			if(j==0 || i==0)
				knapsack[i][j]=0;
			else if(capacity<weight[j-1])
				knapsack[i][j]=knapsack[i][j-1];
			else
				knapsack[i][j]=max(value[j-1]+knapsack[i-weight[j-1]][j-1],knapsack[i][j-1]);
		}
	}
	return knapsack[capacity][num];
}
