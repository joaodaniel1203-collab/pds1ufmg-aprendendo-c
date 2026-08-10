#include <stdio.h>

int main(void) {
    int numero, unidade, dezena, centena, milhar, invertido;

    printf("Digite um inteiro de 4 algarismos: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 100) % 10;
    milhar = numero / 1000;

    invertido = unidade * 1000 + dezena * 100 + centena * 10 + milhar;

    printf("Valor invertido: %d\n", invertido);

    return 0;
}