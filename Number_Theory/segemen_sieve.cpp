void sieveofErathosthenes(int n){
	bool prime[n+1];

	memset(prime,true,sizeof(prime));

	for(int p=2;p*p<=n;p++){
		if(prime[p]==true){
			for(int i=p*p;i<=n;i=i+p){
				prime[i]=false;
			}
		}
	}

	vector<int> prime;

	for(int i=2;i<=n;i++) 
		if(prime[i])
			prime.push_back(i);


	return;
}


void segementedSieve(int n){
	int limit = floor(sqrt(n)) + 1;
	vector<int> prime;
	sieveofErathosthenes(limit,prime);

	int low = limit;
	int high = 2*limit;

	while(low<n){
		if(high>=n)
			high=n;
	}

	bool mark[limit+1];

	memeset(mark,true,sizeof(mark));

	for(int i=0;i<prime.size();i++){
		int lower_limit = floor(low/prime[i])*prime[i];
		if(lower_limit<low) lower_limit+prime[i];

		for (int j=lower_limit; j<high; j+=prime[i]) 
                mark[j-low] = false;

        for (int i = low; i<high; i++) 
            if (mark[i - low] == true) 
                cout << i << " "; 
  
        low = low + limit; 
        high = high + limit;
	}
}