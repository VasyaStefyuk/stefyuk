#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,n,x;
	int A[n][n];
	printf("Vvedit rozmir");
	scanf("%d",&n);
	printf("Vvedit zaminu");
	scanf("%d",&x);
	for(i=0; i<n;i++) {
        for(j=0; j<n; j++) {
        	A[i][j]=rand() % 100;}}
        	
        	for(i=0; i<n; i++) {
           	printf("\n");
        for(j=0; j<n; j++) {
		printf ("   %d",A[i][j]);}}
        	
        	for(i=0; i<n;i++) {
        for(j=0; j<n; j++) {
        	if (A[i][j]%2 == 0)
        	A[i][j]=x;}}
        	printf("\n");
        	for(i=0; i<n; i++) {
           	printf("\n");
        for(j=0; j<n; j++) {
		printf ("   %d",A[i][j]);}}
	
	return 0;
}
