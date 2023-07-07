// Diâmetro, circunferência e área de um círculo.
# include <stdio.h>

int main(void)
{
    float raio, circunferencia, area;
    float pi = 3.14159;
    printf("Raio: ");
    scanf("%f", &raio);

    circunferencia = 2 * pi * raio;
    printf("Circunferencia: %f\n", circunferencia);

    area = pi * raio * raio;
    printf("Area: %f\n", area);

}