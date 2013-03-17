#include <stdio.h>

main () {
  int c;
  int space;
  
  c, space = 0;
  
  while ((c=getchar()) != EOF) {
   if (c == ' ' && space == 0) {
     space = 1;
     putchar(c);
   }
   else if (c == ' ' && space == 1);
   else {
	space = 0;
	putchar(c);
   }
  }
}