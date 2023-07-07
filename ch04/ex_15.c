// Programa de juros compostos modificado.
# include <stdio.h>

int main(void)
{
    double valor;
    double principal = 1000.0;
    double taxa;
    int ano;

    printf("%4s%15s\n", "Ano", "Valor");
    for (taxa = 0.06; taxa <= 0.1; taxa+=0.01)
    {
        printf("Taxa = %.2f\n", taxa);
        for (ano = 1, valor = principal; ano <= 10; ano++)
        {
            valor += valor * taxa;
            printf("%4d%15.2f\n", ano, valor);
        }
    }

}