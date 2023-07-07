// Calculando limites de crédito.
# include <stdio.h>

int main(void)
{
    int conta;
    float limite, saldo;

    for (int n = 1; n <= 3; n++)
    {
        printf("Conta: ");
        scanf("%d", &conta);

        printf("Limite: ");
        scanf("%f", &limite);

        printf("Saldo: ");
        scanf("%f", &saldo);

        limite /= 2;
        printf("Novo limite: %.2f\n", limite);

        if (saldo > limite)
            printf("Saldo acima do limite!\n\n");
        else
            printf("Saldo dentro do limite!\n\n");
        

    }
}
