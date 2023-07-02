// Par ou ímpar.
# include <stdio.h>

int main(void)
{
    // Inicialização
    int n;

    // Entrada
    printf("Insira um inteiro: ");
    scanf("%d", &n);

    // Processamento
    if (n % 2 == 0)
        printf("%d eh par\n", n);
    else
        printf("%d eh impar\n", n);
    
    return 0;

}