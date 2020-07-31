#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int H[3][8];
	int i,j,n,g;
	int sum[8];
	for(i=0; i<3;i++) {
        for(j=0; j<8; j++) {
        	H[i][j]=rand() % 10;}}
        	
        	for(i=0; i<3;i++) {
        		printf("\n");
        for(j=0; j<8; j++) {
        	printf("   %d",H[i][j]);}}
        	
        	for(i=0; i<3;i++) {
        	
	        for(j=0; j<8; j++) {
	        	n=j;
        	if ((H[i][j]%2)==0)
        	sum[j]=H[i][j]+sum[j];
        }}
        printf("\n");
	for(j=0; j<8; j++){
		printf("  suma %d",sum[j]);
	}
	
	return 0;
}
