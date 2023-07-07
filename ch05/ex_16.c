// Exponenciação
# include <stdio.h>
# include <math.h>

float potenciaInt(int, int);

int main(void)
{
    int base, expoente, potencia;
    printf("Base: ");
    scanf("%d", &base);
    printf("Expoente: ");
    scanf("%d", &expoente);

    potencia = potenciaInt(base, expoente);
    printf("%d elevado a %d = %d\n", base, expoente, potencia);
}

float potenciaInt(int base, int expoente)
{
    float pot;
    pot = pow(base, expoente);
    return pot;
}