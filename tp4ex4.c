#include<stdio.h>
void main()
{
	const int n=50;
	int t1[n],t2[n],t3[n];
	int i,j,x;
	printf("donner la taille de tableau");
	scanf("%d",&x);
for(i=0;i<x;i++){
	printf("t1[%d]",i);
	scanf("%d",&t1[i]);
}

for(j=0;j<x;j++){
	printf("t2[%d]",j);
	scanf("%d",&t2[j]);}
	printf("le contenue de t1 avant permutation est \n");
	for(j=0;j<x;j++){
		printf("%d",t1[j]);

	}
	printf("\n");
	printf("le contenue de t2 avant permutation est \n");
	for(j=0;j<x;j++){
		printf("%d",t2[j]);

}
	printf("\n");
for(j=0;j<x;j++){
t3[j]=t1[j];
t1[j]=t2[j];
t2[j]=t3[j];

}
printf("le contenue de t1 apres premutation est \n");
for(j=0;j<x;j++){
	printf("%d",t1[j]);

}
printf("\n");
printf("le contenue de t2 apres premutation  est \n");

for(j=0;j<x;j++){
	printf("%d",t2[j]);
}
}
