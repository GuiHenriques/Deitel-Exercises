// Calculadora de salário.
# include <stdio.h>

int main(void)
{
    int horas;
    float salario_hora, total;

    // Pede horas
    printf("Horas (-1 para sair): ");
    scanf("%d", &horas);

    while (horas != -1)
    {
        // Pede outros dados
        printf("Salario por hora: ");
        scanf("%f", &salario_hora);

        printf("horas: %d\n", horas);

        // Calcula salario total
        if (horas < 40)
            total = salario_hora * horas;
        else
            total = (salario_hora * 40) + 1.5 * salario_hora * (horas%40);

        printf("Salario total: R$%.2f\n\n", total);

        // Le proxima hora
        printf("Horas (-1 para sair): ");
        scanf("%d", &horas);
    }
}