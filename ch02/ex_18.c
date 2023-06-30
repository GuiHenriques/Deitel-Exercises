// Comparando inteiros.
# include <stdio.h>

int main(void)
{
    // Inicializa
    int a, b;

    // Le entrada
    printf("Primeiro numero: ");
    scanf("%d", &a);

    printf("Segundo numero: ");
    scanf("%d", &b);

    // Compara
    if (a > b) {
        printf("%d eh maior", a);
    } else if (b > a) {
        printf("%d eh maior", b);
    } else {
        printf("Esses numeros sao iguais");
    }
}