#include <stdio.h>

int main() {
    int totalSegundos;
    int horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &totalSegundos);


    horas = totalSegundos / 3600;

    // % calcula o resto dos segundos após remover as horas inteiras; esse resto corresponde aos segundos que podem formar minutos
    minutos = (totalSegundos % 3600) / 60;

    // calcula os segundos restantes depois de remover horas e minutos
    segundos = totalSegundos % 60;

    printf(" Valor Convertido: %dH %dMin %dSeg \n",
           horas, minutos, segundos);
    return 0;
}