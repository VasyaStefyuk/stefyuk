#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int **A;
	int i,b[50],n,m,j,*min;
	A=(int**)malloc(5*sizeof(int*));
	for(i=0;i<6;i++)
	A[i]=(int*)malloc(6*sizeof(int));

	printf("Golosuvannia\n");
	for(i=0;i<6;i++){
	for(j=0;j<5;j++){
	A[i][j]=rand()%300;
	printf("%d\t",A[i][j]);}
	printf("\n");}
	
	for(j=0;j<5;j++){
		if (min>A[2][j])
		min=A[2][j];}
		printf("min= %d",min);


	return 0;
}
