// Média de uma sequência de inteiros.
# include <stdio.h>

int main(void)
{
    int n = 0, numero, soma = 0;
    float media;

    printf("Numero (9999 para sair): ");
    scanf("%d", &numero);

    while (numero != 9999)
    {    
        soma += numero;
    
        printf("Numero (9999 para sair): ");
        scanf("%d", &numero);

        n++;
    }

    media = (float) soma / n;
    printf("Media: %.2f\n", media);
}