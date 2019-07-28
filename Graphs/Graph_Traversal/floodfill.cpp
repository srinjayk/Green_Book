//// trick to explore an implicit 2D grid //
// S,SE,E,NE,N,NW,W,SW neighbors
int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};

int floodfill(int r, int c, char c1, char c2){
	//if out of the grid return 0
	if(r<0 || r>=R || c<0 || c>=C) return 0;
	//if the color is not c1 return 0
	if(grid[r][c]!=c1) return 0;
	//add 1 corresponding to the visited vertex
	int ans = 1;
	//now recolour it to avoid visiting again
	grid[r][c] = c2;
	for(int d=0;d<8;d++){
		ans = ans+floodfill(r+dr[d],d+dc[i]);
	}
	return ans;
}
