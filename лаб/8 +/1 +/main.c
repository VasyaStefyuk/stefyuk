#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int n;
	float S,q,b,g;
	printf ("Vvedit b1 ");
	scanf("%f",&b);
	printf ("Vvedit q");
	scanf("%f",&q);
	printf ("Vvedit n");
	scanf("%f",&n);
	g=pow(n,q);
	S =(b*(1-g))/(1-q);
	printf("S= %0.2f",S);
	return 0;
}
