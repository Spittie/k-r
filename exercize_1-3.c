#include <stdio.h>

main() {
  float fahr, celsius;
  float lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  
  printf("celsius\t  fahr\n");
  
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%7.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}