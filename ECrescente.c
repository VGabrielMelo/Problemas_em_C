#include <stdio.h>
int main(){
  int cres, /*flag*/
  i, num1, num2, soma, n;
  cres=1;
  printf("Quantos são os elementos?\n");
  scanf("%d",&n);
  scanf("%d",&num1);
  soma=num1;
  for (i=1; i < n; i++){
    scanf("%d", &num2);
    if (num1>num2) cres=0;
    num1=num2;
    soma+=num1;
  }
  if (cres == 1) printf("A sequência e crescente\n");
  else printf("A sequência nao e crescente\n");
  return 0;
}