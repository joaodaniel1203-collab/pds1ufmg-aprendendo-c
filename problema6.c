#include <stdio.h>
#include <math.h>


int main(void){
    float vp;
    float i;
    int n;
    float vf;

    printf("Digite o valor do investimento inicial (aporte): ");
    scanf("%f", &vp);
    printf("Digite a taxa de juros anual : ");
    scanf("%f", &i);
    printf("Digite o periodo do investimento (em anos): ");
    scanf("%d", &n);

    //ou,vf== vp * pow(1 + i * 0.01f, n);
     vf = vp; // significa que o vf atribuí o valor do vp.
    float fator = 1.0f + i * 0.01f;
    for (int k = 0; k < n; k++) {
        vf *= fator;
    }

    printf("O valor final do investimento é: %.2f\n", vf);
    return 0;
}