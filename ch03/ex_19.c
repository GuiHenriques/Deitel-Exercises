// Calculadora de comissão de vendas.
# include <stdio.h>

int main(void)
{
    // Inicialização
    int fixo = 200;
    float vendas, pagamento;

    // Pede vendas
    printf("Vendas (-1 para sair): ");
    scanf("%f", &vendas);

    while (vendas != -1)
    {
        pagamento = vendas * 0.09 + 200;
        printf("Pagamento: %.2f\n\n", pagamento);

        printf("Vendas (-1 para sair): ");
        scanf("%f", &vendas);
    }
}