#include <stdio.h>

/* ctrl+D to send an EOF, should return 0
 * Any other keys, should return 1 */

main () {
  int x = getchar() != EOF;
  printf("%d\n",x);
}