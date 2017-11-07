#include <stdio.h>
#include <stdlib.h>

int belongs (char a, char * vet) {
	int i = 0;

	while (vet[i] != '\0' && vet[i] != a)
		i++;
	return vet[i];
}

int vogal_cont (char * s, char * vet) {
	int vogais = 0;
	
	for (int i = 0; s[i] != '\0'; i ++)
		if (belongs (s[i], vet))
			vogais++;
			
	return vogais;
}

int main () {
	char vet_vogal [11] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
	char entrada [255];
	
	fgets (entrada, 255, stdin);
	printf ("%d\n", vogal_cont (entrada, vet_vogal));
	
	return 0;
}