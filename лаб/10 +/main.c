#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

	typedef struct
	{
		char name[20];	
		int price;
		int age;
		char cantri[10];
		char avtor[10];
		int doxid;
	}	cinema; 
	
int main(int argc, char *argv[]) 
{

	int i=0,j=0,k=1;
	
	char tmp[3]="Yes";
	
	cinema *info;
	info = (cinema *) calloc (k,sizeof(cinema));
	
	while (strcmp(tmp,"Yes")==0)
	{
		printf("Put in cinema \n");
	
	    printf ("avtor): ");
		scanf("%s",info[i].avtor); 
		
		printf ("Name:");
		scanf ("%s",info[i].name);
			
		printf ("Price:");
		scanf ("%d",&info[i].price);
			
		printf ("Age:");
		scanf ("%d",&info[i].age);
			
		printf ("cantri");
		scanf  ("%s",info[i].cantri);
			
		printf ("doxid: ");
		scanf("%s",info[i].doxid); 

		printf ("Input more?(Yes/No) ");
		scanf ("%s",tmp);
	
		if (strcmp(tmp,"Yes")==0)
		{
			i++;k++;	
			info = (cinema*)realloc(info, sizeof(cinema)*k);
		}
		printf ("\n");
	}
	
		
	char *a;
	int b,t;
	
	a = malloc(10 * sizeof(char));

	for (i=0;i<k;i++)
		{
			if (info[i].doxid < info[i].price)
				{
				b=b+1;	
				for (t=0;t<b;t++)
				{
				a[t]=info[i].avtor;	
			
						}
				}		
		}
		for (t=0;t<b;t++){
			printf("avtor %s",a[t]);
			}


	system("pause");
	return 0;
}
