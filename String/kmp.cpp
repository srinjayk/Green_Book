#define MAX_N 100010

// T is the text
// P is the pattern
char T[MAX_N], P[MAX_N];
//bis the back table
int b[MAX_N];
//n is the length of T
//m is the length of P
int n,m;


//call before kmpSearch
void kmpProcesses(){
	int i=0;
	int j=-1;
	b[0]=-1;
	while(i<m){
		while(j>=0 && P[i]!=P[j]){
			j=b[j];
		}
		i++;
		j++;
		b[i]=j;
	}
}

void kmpSearch(){
	int i=0;
	int j=0;
	while(i<n){
		while(j>=0 && T[i]!=P[j]){
			j=b[j];
		}
		i++;
		j++;
		if(j==m){
			cout << "P is found at index" <<i-j;
			j=b[j];
		}

	}
}