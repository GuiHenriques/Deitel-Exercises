// Calculadora de limite de crédito.
# include <stdio.h>

int main(void)
{
    int conta;
    float inicial, encargos, creditos, limite, saldo;

    // Pede numero da conta
    printf("Numero da conta (-1 para sair): ");
    scanf("%d", &conta);

    while (conta != -1)
    {
        // Pede outros dados
        printf("Saldo inicial: ");
        scanf("%f", &inicial);

        printf("Encargos: "); // +
        scanf("%f", &encargos);

        printf("Creditos: ");
        scanf("%f", &creditos);

        printf("Limite: ");
        scanf("%f", &limite);

        // Calcula saldo
        saldo = inicial + encargos - creditos;


        // Verifica limite ultrapassado
        if (saldo > limite)
        {
            printf("Conta: %d\n", conta);
            printf("Limite: %.2f\n", limite);
            printf("Saldo: %.2f\n", saldo);
            printf("Limite de credito ultrapassado\n");
        }
        
        // Pede proxima conta
        printf("Numero da conta (-1 para sair): ");
        scanf("%d", &conta);

    }
}