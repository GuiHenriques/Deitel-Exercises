// Calculadora de juros.
# include <stdio.h>

int main (void)
{
    // Inicialização
    float principal, taxa, juros;
    int dias;


    printf("Valor do emprestimo (-1 para sair): ");
    scanf("%f", &principal);

    while (principal != -1)
    {
        // Entradas
        printf("Taxa de Juros: ");
        scanf("%f", &taxa);

        printf("Prazo em dias: ");
        scanf("%d", &dias);

        juros = principal * taxa * dias / 365;
        printf("Juros: %.2f\n\n", juros);
        

        // Le proximo valor
        printf("Valor do emprestimo (-1 para sair): ");
        scanf("%f", &principal);
    }
}