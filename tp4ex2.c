#include <stdio.h>
void main() {
	const int n, n1, n2 = 50;
	int t[n], tp[n1], tn[n2];
	int i, k, c, j, x, y;
	printf("donner la taille de tableau t ");
	scanf("%d", &k);
	j = 0;
	c = 0;
	for (i = 0; i < k; i++) {
		printf("t[%d]", i);
		scanf("%d", &t[i]);
		if (t[i] < 0) {
			tn[c] = t[i];
			c = c + 1;
		} else {
			tp[j] = t[i];
			j++;
		}

	}
	printf("les element de tn est \n");
	for (x = 0; x < c; x++) {
		printf(" ");
		printf("%d", tn[x]);
	}
	printf("\n");
	printf("les element de tp est \n");
	for (y = 0; y < j; y++) {
		printf(" ");
		printf("%d", tp[y]);
	}

}
