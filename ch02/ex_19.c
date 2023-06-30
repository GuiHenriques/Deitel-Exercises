// Aritmética, maior e menor valor.
# include <stdio.h>

int main(void)
{
    // Inicializa
    int a, b, c, soma, media;
    
    // Le 3 inteiros
    printf("Digite 3 inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    // Soma
    soma = a + b + c;
    printf("Soma: %d\n", soma);

    // Média
    media = soma / 3;
    printf("Media: %d\n", media);

    // Produto
    printf("Produto: %d\n", a * b * c);

    // Menor
    if (a < b && a < c)
        printf("Menor: %d\n", a);
    else if (b < a && b < c)
        printf("Menor: %d\n", b);
    else
        printf("Menor: %d\n", c);

    // Maior
    if (a > b && a > c)
        printf("Maior: %d\n", a);
    else if (b > a && b > c)
        printf("Maior: %d\n", b);
    else
        printf("Maior: %d\n", c);
    
    return 0;
}