#include <stdio.h>
void main() {
	const int n = 50;
	int t[n];
	int a, i,  x, j;
	printf("donner un entier a convertir");
	scanf("%d", &x);
	i = -1;

	do {
		i=i+1;
		a = x % 2;
		t[i] = a;
		x = x / 2;
	} while (x!=0);
	for (j = i; j >= 0; j--) {
		printf("%d", t[j]);
	}

}
