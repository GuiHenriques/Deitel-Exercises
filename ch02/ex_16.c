// Atitmética
# include <stdio.h>

int main(void)
{
    // Inicializa variaveis
    int n1, n2, result;

    // Le dois numeros
    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("Segundo numero: ");
    scanf("%d", &n2);

    // Soma
    printf("Soma: %d\n", n1+n2);

    // Produto
    printf("Produto: %d\n", n1*n2);

    // Diferença
    printf("Diferenca: %d\n", n1-n2);

    // Quociente
    printf("Quociente: %d\n", n1/n2);

    // Modulo
    printf("Modulo: %d\n", n1%n2);

    return 0;

}