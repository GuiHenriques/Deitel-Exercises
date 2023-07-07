// Tarifa de estacionamento.
# include <stdio.h>

float calcularTaxas(float horas);

int main(void)
{
    // Inicialização
    float horas[] = {1.5, 4.0, 24.0};
    float taxa;
    float horasTotais = 0, taxaTotal = 0;

    printf("%8s%8s%8s\n", "Carro", "Horas", "Taxa");

    for (int i = 0; i < 3; i++)
    {
        taxa = calcularTaxas(horas[i]);
        printf("%8d%8.1f%8.2f\n", i, horas[i], taxa);
    }
}

float calcularTaxas(float horas)
{
    float taxa = 2.0;

    if (horas > 3)
    {
        taxa += (horas - 3) * 0.5;
    }

    if (taxa > 10)
    {
        taxa = 10;
    }

    return taxa;
}