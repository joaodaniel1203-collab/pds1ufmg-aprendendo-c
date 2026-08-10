#include <stdio.h>
int main(void){
    int a1, b1, c1;
    int a, b, c;
    int inteiros;

    printf("Digite três numeros inteiros: ");
    scanf("%d %d %d", &a1, &b1, &c1);

    a = a1 * a1;
    b = b1 * b1;
    c = c1 * c1;
    inteiros = a + b + c;

    printf("A soma dos quadrados dos numeros digitados é: %d\n", inteiros);
    return 0;
}