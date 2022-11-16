#include <stdio.h>
#include <stdlib.h>

int main(void) {
//declaração de variáveis
  float nota1,nota2,media;

//obter notas 
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

//calcula a média
  media = (nota1+nota2)/2;

//Verifica se foi aprovado ou não
  if(media >= 7)
  printf("Aprovado");
  else
  printf("Reprovado");

  system("pause");
  return 0; 

}