// Maiores e menores inteiros.
# include <stdio.h>

int main(void)
{
    // Inicialização
    int a, b, c, d, e;

    // Ler 5 ints
    printf("Insira 5 inteiros: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    // Maior
    int maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    if (d > maior)
        maior = d;
    if (e > maior)
        maior = e;
    printf("Maior: %d\n", maior);
        
    // Menor
    int menor = a;
    if (b < menor)
        menor = b;
    if (c < menor)
        menor = c;
    if (d < menor)
        menor = d;
    if (e < menor)
        menor = e;
    printf("Menor: %d\n", menor);

    return 0;
}