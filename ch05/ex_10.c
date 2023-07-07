// Arredondando números.
# include <stdio.h>
# include <math.h>

int main(void)
{
    float n;

    printf("Digite 0 para sair.\n");
    do {
        printf("Numero: ");
        scanf("%f", &n);
        printf("Arredondado: %.2f\n", floor(n + .5));
    }   while (n != 0);
}