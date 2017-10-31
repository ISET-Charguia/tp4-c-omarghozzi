/*
 ============================================================================
 Name        : tp4ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	int t[50], n, c, i, min, x, occ, y, p, s, j, k;
	printf("donner la taille de tableau");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("t[%d]", i);
		scanf("%d", &t[i]);
	}

	for (i = 0; i < n; i++) {
		printf("%d|", t[i]);
	}
	printf("\n");
	printf("donner votre choix 1 2 3 4");
	scanf("%d", &c);
	if (c == 1) {
		min = t[0];
		for (i = 1; i <= n; i++) {
			if (t[i] < min) {
				min = t[i];
			}
		}
		printf("le min de tableau est %d", min);

	} else if (c == 2) {
		occ = 0;
		do {
			printf("donner l'element a remplacer");
			scanf("%d", &x);

			for (i = 0; i < n; i++)
				if (t[i] == x)

					occ = 1;

		} while ((i < n) || (occ == 0));
		printf("\n");
		printf("donner le nouveau valeur");
		scanf("%d", &y);
		for (i = 0; i < n; i++) {
			if (t[i] == x)
				t[i] = y;
		}
		printf("\n");
		for (i = 0; i < n; i++) {
			printf("%d|", t[i]);
		}

	} else if (c == 3) {
		printf("donenr la position ");
		scanf("%d", &p);
		printf("donenr l'entier");
		scanf("%d", &y);
		n = n + 1;
		i = n;
		while (i > p) {
			t[i] = t[i - 1];
			i--;
		}
		t[p] = y;
		for (i = 0; i < n; i++) {
			printf("%d|", t[i]);
		}

	} else if (c == 4) {

		occ = 0;

		printf("donner x");
		scanf("%d", &x);

		for (i = 0; i <= n; i++) {
			if (t[i] == x)

			{
				occ = occ + 1;
			}
		}

		for (i = 0; i <= occ; i++) {
			for (k = 0; k < n; k++) {

				if (t[k] == x) {
					j == 0;
					do {

						t[j] = t[j + 1];

						j++;

					} while (j < n);

				}
				n--;
			}

		}
	}

	printf("\n");
	for (i = 0; i <= n; i++) {
		printf("%d|", t[i]);
	}
}
