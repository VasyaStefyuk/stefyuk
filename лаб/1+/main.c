#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int R=4;
    int x=0;
    int y=0;
 printf("vvedit x");
 scanf("%d",&x);
 printf("vvedit y");
 scanf("%d",&y);
    if((y<R && y>-R && x<R && x>-R) && (x+R)*(x+R)+(y-R)*(y-R)>R*R && (x-R)*(x-R)+(y+R)*(y+R)<R*R)
        printf("in");
    else
        printf("out");
 
	return 0;
}
