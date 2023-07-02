// Pré-incrementando versus pós-incrementando.
# include <stdio.h>

int main(void)
{
    int a, b;

    printf("Numero a ser pre-incrementado: ");
    scanf("%d", &a);

    // Pre-incremento
    printf("Primeiro uso: %d\n", ++a);
    printf("Segundo uso: %d\n", ++a);

    printf("Numero a ser pos-incrementado: ");
    scanf("%d", &b);

    printf("Primeiro uso: %d\n", b++);
    printf("Segundo uso: %d\n", b++);
}