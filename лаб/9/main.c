#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <tchar.h>

#include <conio.h>
#include <windows.h>
#include <sys/types.h>

#include <stdio.h>
void main() {

int A, index, rep = 1, i, j;
char N[100], t;
while (rep == 1){
clrscr();
printf("vvedit slova : ");
scanf("%s",N);
for(i = 0; N[i] != '\0'; i++)
{
for(j = i+1; N[j] != '\0'; j++)
{
if (N[i] < N[j])
{
t = N[i];
N[i] = N[j];
N[j] = t;
}
}
}
printf("\n ryad: %s\n", N);
}
return 0;
}
