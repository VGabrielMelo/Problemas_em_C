#include <stdio.h>
#include <math.h>
int main() {
  float num, nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50, moeda25, moeda10, moeda05, moeda01;
  scanf("%f",&num);

    printf("NOTAS:\n");
    nota100 = floor(num/100.00);
    num     = fmod(num,100.00);
    nota50  = floor(num/50);
    num     = fmod(num,50);
    nota20  = floor(num/20);
    num     = fmod(num,20);
    nota10  = floor(num/10);
    num     = fmod(num,10);
    nota5   = floor(num/5);
    num     = fmod(num,5);
    nota2   = floor(num/2);
    num     = fmod(num,2);

  printf("%.0f nota(s) de R$ 100.00\n",nota100);

  printf("%.0f nota(s) de R$ 50.00\n", nota50);
  
  printf("%.0f nota(s) de R$ 20.00\n", nota20);
  
  printf("%.0f nota(s) de R$ 10.00\n", nota10);
  
  printf("%.0f nota(s) de R$ 5.00\n", nota5);

  printf("%.0f nota(s) de R$ 2.00\n", nota2);
  }