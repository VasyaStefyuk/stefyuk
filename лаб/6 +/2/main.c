#include <assert.h>
#include <stdio.h>
#include <ctype.h>
int
main ()
{
	int n;
	printf("Vvedit imya");
  char c;
  while ((c = getchar ()) != EOF) {
    if ('a' <= c && c <= 'z') {
      c += 'A' - 'a';
    }
     putchar (c);
  }
   assert (! ferror (stdin));

 

  return 0;
}
