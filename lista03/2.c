#include <stdio.h>
#include <stdlib.h>

int size (char *str) {
	int len;
	for (len = 0; str[len] != '\0'; len++);
	return len;
}

void char_switch (char *a, char *b) {
	char temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void string_print (char *str, int n) {
	for (int i = 0; i < n; i++) {
		printf ("%c", str[i]);
	}
	printf ("\n");
}

void string_invert (char *str, int len) {
	for (int i = 0; i < len/2; i ++)
		char_switch (&str[i], &str[len-i-1]);
}

int main () {
	char entry  [255];
	int len;
	
	fgets (entry, 255, stdin);
	len = size (entry);
	
	string_invert (entry, len);
	string_print (entry, len);
	
	return 0;
}