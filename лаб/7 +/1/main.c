#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void func(int n,int *a)
{	srand(time(NULL));
	int i;
	for(i=0;i<n;i++)
	{a[i]=rand()%23-25;
	printf("%d\t",a[i]);
	
	}
}
void sum(int n,int *a)
{
	int i, idx,sum,kil;
	for(i=0;i<n;i++)
	{
		 if(a[i]<0)
		 sum+=a[i];
		 kil=kil+1;
		  }
		  printf("suma= %d ",sum);
		  printf("kilkist -",kil);
	}
	void kilkist(int n,int *a)
{   int plus,i;
for(i=0;i<n;i++)
	{
		 if(a[i]>0)
		  plus=plus+1;
		  }
		  printf("plus= %d",plus);
	}
	
int main(int argc, char *argv[]) {
	srand(time(NULL));	
	int n;
	printf("Size of array\n");
	scanf("%d",&n);
	int a[n]; 
	printf("Array:\n");
	func(n,*a);
    sum(n,*a);
kilkist(n,*a);
	return 0;
}

