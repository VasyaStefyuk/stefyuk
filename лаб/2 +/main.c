#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int T[9]; 
  int i;
  int b;
  float ser;
  int d;
  d=0;
  b=0;
  printf ("Vvedit masyv ");
  for (i = 0; i<9; i++) 
  {
    printf("T[%d] = ", i);
    scanf("%d", &T[i]); 
  }
  
  for(i = 0; i <9;i++)
  	{if (T[i]<0)
	d =i+d;
  	b=b+1;
		  }
		  
   ser=d/b;
  printf (" %f",ser);
  return 0;
}
