#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int R[10];
	int i;
	int max1, max2, max3;
	float ser;
	
	for (i = 0; i<10; i++) 
  {
    printf("R[%d] = ", i);
    scanf("%d", &R[i]); 
  }
  for ( i = 0; i < 10; i++)
  {
          if ((R[i]) > max1)
            max1 = R[i];}
            for ( i = 0; i < 10; i++)
  {
          if (R[i]>max2 && R[i]<max1 )
            max2 = R[i];}
             for ( i = 0; i < 10; i++)
  {
          if (R[i]>max3 && R[i]<max1 && R[i]<max2 )
            max3 = R[i];}
            ser=(max1*max1+max2*max2+max3*max3)/3;
            
            for (i = 0; i<10; i++) 
  {
    printf("%d  ",R[i]);}
    printf ("\n seredne   %f",ser);
    printf ("\n max1  %d",max1);
    printf ("   max2  %d",max2);
    printf ("   max3  %d",max3);
	return 0;
}
