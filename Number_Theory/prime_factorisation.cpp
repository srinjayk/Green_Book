void primefactor(int n){
	vector<int> factor;
	for(int i=2;i<sqrt(n);i++){
		while(n%i==0){
			factor.push_back(i);
			n=n/i;
		}
	}
}