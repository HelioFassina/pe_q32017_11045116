#define M 3
#include <stdio.h>
#include <stdlib.h>

void print_matriz (int v[M][M], int n, int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf ("%d ", v[j][i]);
		}
		printf ("\n");
	}
	printf ("\n");
}

void read_matriz (int v[M][M], int n, int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf ("%d", &v[i][j]);
		}
	}
}

int main () {
	int mat[M][M];
	
	read_matriz (mat, M, M);
	print_matriz (mat, M, M);
	
	return 0;
}