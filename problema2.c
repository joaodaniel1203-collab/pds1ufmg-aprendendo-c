#include <stdio.h>
int main() {
  float velocidade;
  float aceleracao;
  float tempo;
  float velocidade_final;
  float distancia;


  printf("Digite o valor da velocidade (m/s): ");
  scanf("%f", &velocidade);
  printf("Digite o valor da aceleracao (m/s^2): ");
  scanf("%f", &aceleracao);
  printf("Digite o valor do tempo (s): ");
  scanf("%f", &tempo);


  velocidade_final = velocidade + aceleracao*tempo; // Formula da velocidade final: vf = v0 + a*t

  printf("Velocidade final: %.2f m/s\n", velocidade_final);// %.2f para formatar a saída com duas casas decimais ; f no final do %.2f indica que o valor é do tipo float
  distancia = velocidade * tempo + 1.0f/2.0f * aceleracao * tempo * tempo; // 1.0f/2.0f para garantir que a divisão seja feita com números de ponto flutuante (float) e não com inteiros (int)
  printf("Distancia percorrida: %.2f metros\n", distancia);// \n para pular uma linha no final da saída

  return 0;// O retorno 0 indica que o programa terminou com sucesso
}