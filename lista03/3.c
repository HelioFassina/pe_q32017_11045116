#include <stdio.h>
#include <stdlib.h>

void vet_read (int *v, int n) {
	for (int i = 0; i < n; i++) {
		scanf ("%d", v+i);
	}
}

void vet_print (int *v, int n) {
	for (int i = 0; i < n; i++) {
		printf ("%d ", v[i]);
	}
	printf ("\n");
}

int * vet_sum (int *v1, int *v2, int n) {
	int *v3 = malloc (sizeof(int) * n);
	for (int i = 0; i < n; i++)
		v3 [i] = v1[i] + v2[i];
	return v3;
}

int main () {
	int v1[5], v2[5];
	int *v3;
	
	vet_read (v1, 5);
	vet_read (v2, 5);
	
	v3 = vet_sum (v1, v2, 5);
	vet_print (v3, 5);
	
	return 0;
}