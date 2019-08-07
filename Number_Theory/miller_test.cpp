bool millerTest(int d, int n){
	int a = 2 + rand()%(n-4);
	int x = power(a,d,n);

	if(x==1 || x==n-1) return  true;


	while(d!=n-1){
		x = (x*x)%n;
		d = d*2;

		if(x==1) return false;
		if(x==n-1) return true;
	}
	return false;
}

bool isPrime(int n, int k) 
{ 
    if (n <= 1 || n == 4)  return false; 
    if (n <= 3) return true; 
  
    int d = n - 1; 
    while (d % 2 == 0) 
        d /= 2; 
  
    for (int i = 0; i < k; i++){ 
         if (!millerTest(d, n)){ 
              return false; 
  		}
  	}
    return true; 
} 