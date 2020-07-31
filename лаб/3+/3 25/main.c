#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int	T[6][6];
int i,j;
int max,n,k;
	for(i=0; i<6;i++) {
        for(j=0; j<6; j++) {
        	T[i][j]=rand() % 10 -9;}}
	
	max=T[0][0];
	
	for(i=0; i<6; i++) {
        for(j=0; j<6; j++) {
            if (i=j) {
            if	(T[i][j]<0){
            	if( T[i][j]>max ){
            	max=T[i][j];
            	n=i;
            	k=j;}}
            }}}
           for(i=0; i<6; i++) {
           	printf("\n");
        for(j=0; j<6; j++) {
		printf ("   %d",T[i][j]);}}
		printf("\n  max= %d",max);
		printf("   index %d %d",n,k);
	return 0;
}
