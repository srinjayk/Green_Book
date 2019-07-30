int power(int x, int y, int p){
	// initialise the result
	int res=1;
	//the remainder of the x
	x = x%p;

	//interate till the y is null
	while(y>0){
		//if the power is odd multiply x
		if(y&1) res=(res*x)%p;
		//reduce y by 2;
		y = y>>1;
		x = (x*x)%p;
	}
	return res;
}