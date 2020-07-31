#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int A[100][100];
	int i,b[50],n,m,j;
	printf("Enter n= ");scanf("%d",&n);
	printf("Enter m= "); scanf("%d",&m);
	
	printf("Matrix\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	A[i][j]=rand()%20-13;
	printf("%d\t",A[i][j]);}
	printf("\n");}
	
	printf("\n");
	int max,kil,k,idx;
	max=0;
	idx=n;
	for(i=0;i<n;i++){
		kil=0;
	for(j=0;j<m;j++){
			for(k=j+1;k<m;k++){  if (A[i][j]==A[i][k]){ kil++; break;}
			}}
	if(kil>max) 
	{
		max=kil;
		idx=i;
		
	}
	}
	printf("\n");
	

	printf("V %d riadky naibilshe povtoren",idx+1);


	return 0;
}

