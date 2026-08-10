#include <stdio.h>

int main() {
    float raio;// Variável para armazenar o valor do raio da circunferência
    float perimetro;// Variável para armazenar o valor do perímetro da circunferência
    float area;// Variável para armazenar o valor da área da circunferência
    float volume;// Variável para armazenar o valor do volume da esfera

    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);

    perimetro = 2 * 3.1415 * raio;
    area = 3.1415 * raio * raio;
    volume = (4 * 3.1415 * raio * raio * raio) / 3;

    printf("Perimetro: %.2f\n", perimetro);//
    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}