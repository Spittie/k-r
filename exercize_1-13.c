#include <stdio.h>

#define MAXLENGHT 10

main () {
  int c, space;
  int i, j = 0;
  
  int count;
  int ndigit[MAXLENGHT];
  
  c, space, count = 0;
  for (i = 0; i <= MAXLENGHT; i++) {
    ndigit[i] = 0;
  }
  
  while ((c=getchar()) != EOF) {
   if (c == ' ' || c == '\t' || c == '\n') {
     if (space == 0) {
	space = 1;
	if (count > MAXLENGHT) {
	  ndigit[MAXLENGHT]++;
	}
	else {
	  ndigit[count]++;
	}
	count = 0;
     }
     else;
   }
   else {
	count++;
	space = 0;
   }
  }
  
  for (i = 0; i <= MAXLENGHT; i++) {
    printf("%d: ", i);
    for (j = 0; j < ndigit[i]; j++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}