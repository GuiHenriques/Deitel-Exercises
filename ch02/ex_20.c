// Diâmetro, circunferência e área de um círculo.
# include <stdio.h>

int main(void)
{
    // Inicialização
    float pi = 3.14159;
    int raio;

    // Entrada
    printf("Digite o raio do circulo: ");
    scanf("%d", &raio);

    // Diametro
    printf("Diametro: %d\n", raio * 2);

    // Circunferência
    printf("Circunferencia: %.2f\n", 2 * pi * raio);

    // Área
    printf("Area: %.2f\n", pi * raio * raio);

    return 0;
}