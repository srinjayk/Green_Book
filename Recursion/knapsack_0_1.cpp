int knapsack(int capacity, vector<int> &weight, vector<int> &value, int num){
	if(num==0 || capacity==0) return 0;
	if(weight[n-1]>capacity) return knapsack(capacity,weight,value,n-1);
	else return max(value[n-1]+knapsack(capacity-weight[n-1],weight,value,n-1),knapsack(capacity,weight,value,n-1));
}
