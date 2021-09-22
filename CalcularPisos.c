#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double area, pisos, pisosarea, pisoC, pisoL, comprimento, largura, areafinal, areafinalporcentagem;

  printf("Olá! Vou te ajudar a calcular quantos pisos você precisa para realizar um revestimento.\n");

  printf("Quantos metros de comprimento?:\n");
  scanf("%lf", &comprimento);

  printf("Quantos metros de largura?:\n");
  scanf("%lf", &largura);

  area= comprimento *  largura;

  printf("Quais são as proporções do piso escolhido em metros?: (ex: 0.60 0.60)\n");

  scanf("%lf%lf",&pisoC, &pisoL);

  pisosarea = (pisoC * pisoL);
  
  areafinal = area/pisosarea;
  
  areafinalporcentagem = ceil(areafinal + (areafinal * 0.10));

  printf(".\n..\n...\n....\n.....\n");

  printf("Você gostaria de acrecentar uma porcentagem de erro?\n");

  printf("digite 1 para SIM e 2 para NÃO\n");

  int pergunta;
  
  scanf("%d", &pergunta);

  if(pergunta == 1)
  printf("A quantidade de pisos necessários serão de: %.2lf pisos.\n",areafinalporcentagem);

  if(pergunta!= 1)
  printf("A quantidade de pisos necessários serão de: %.2lf\n", areafinal);
  return 0;
}