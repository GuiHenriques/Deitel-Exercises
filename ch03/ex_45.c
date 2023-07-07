// Lados de um triangulo retangulo.
# include <stdio.h>

int main(void)
{
    int lado1, lado2, lado3;
    int cat1, cat2, hip;

    printf("Digite os lados do triangulo: ");
    scanf("%d%d%d", &lado1, &lado2, &lado3);

    if (lado1 > lado2 && lado1 > lado3)
    {
        hip = lado1;
        cat1 = lado2;
        cat2 = lado3;
    }
    else if (lado2 > lado1 && lado2 > lado3)
    {
        hip = lado2;
        cat1 = lado1;
        cat2 = lado3;
    }
    else
    {
        hip = lado3;
        cat1 = lado1;
        cat2 = lado2;
    }

    if (hip*hip == cat1*cat1 + cat2*cat2)
        printf("Forma um triangulo retangulo!");
    else
        printf("Nao forma um triangulo retangulo!");
}