#include <stdio.h>

// ctrl+H for backspace

main () {
  int c, space;
  
  c, space = 0;
  
  while ((c=getchar()) != EOF) {
   if (c == ' ' || c == '\t' || c == '\n') {
     if (space == 0) {
	putchar('\n');
	space = 1;
     }
     else;
   }
   else {
	putchar(c);
	space = 0;
   }
  }
}