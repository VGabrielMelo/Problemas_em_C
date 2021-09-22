#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*conversão de tempo*/
int main() {
  int seg, sub;
   printf("Digite o tempo em segundos\n");
  scanf("%d",&seg);
  int converH, converM, converS;
  converH = floor( seg / 3600);
  sub = seg - (converH *3600);
  converM = floor(sub/60);
  converS = seg - (converH *3600 + converM *60);
  printf("A conversão para Hora:minutos:segundos é:\n")
  printf("%d:%d:%d\n",converH,converM, converS);
  return 0;
}