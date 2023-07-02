// Ache os dois maiores números.
# include <stdio.h>

int main(void)
{
    int contador = 0;
    int numero;
    int maior = 0;
    int seg_maior = 0;

    while (contador++ < 10)
    {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            seg_maior = maior;
            maior = numero;
        }
        else if (numero > seg_maior)
            seg_maior = numero;
    }

    printf("Maior: %d\n", maior);
    printf("Segundo Maior: %d\n", seg_maior);
}