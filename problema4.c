#include <stdio.h>

int main(void) {
    int numero, unidade, dezena, centena, milhar, invertido;

    printf("Digite um inteiro de 4 algarismos: ");
    scanf("%d", &numero);


    unidade = numero % 10;//ex: 1234 % 10 = 123,4(o % considera apenas o resto/decimal) = 4

    dezena = (numero / 10) % 10;//ex: 1234 / 10 = 123,4 (a / considera apenas a parte inteira) = 123, então 123 % 10 = 12,3 (o % considera apenas o resto/decimal) = 3

    centena = (numero / 100) % 10;//ex: 1234 / 100 = 12,34 (a / considera apenas a parte inteira) = 12, então 12 % 10 = 1,2 (o % considera apenas o resto/decimal) = 2

    milhar = numero / 1000;//ex: 1234 / 1000 = 1,234 (a / considera apenas a parte inteira) = 1

    
    invertido = unidade * 1000 + dezena * 100 + centena * 10 + milhar;

    printf("Valor invertido: %d\n", invertido);

    return 0;
}