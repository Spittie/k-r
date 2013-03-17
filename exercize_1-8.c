#include <stdio.h>

main () {
  int c, nl, nt, nb;
  
  nl, nt, nb = 0;
  while ((c = getchar()) != EOF) {
      if (c == '\n')
	++nl;
      if (c == '\t')
	++nt;
      if (c == ' ')
	++nb;
  }
  printf("\nNewlines: %d\nTabs: %d\nBlanks: %d\n", nl, nt, nb);
}