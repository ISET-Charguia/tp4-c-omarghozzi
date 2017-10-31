#include<stdio.h>
void main() {
	int s, i,k;
	const int n=20;
	int t[n];

	float moy;
	printf("donner la taille de tableau");
	scanf("%d", &k);
	s = 0;

	for (i = 0; i < k; i++) {
		printf("t[%d]",i);
		scanf("%d", &t[i]);
		s = s + t[i];
	}
	moy = (s + 0.0) / k;
	printf("%f", moy);
}
