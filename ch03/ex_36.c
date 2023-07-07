// Imprimindo o equivalente decimal de um número binário.
# include <stdio.h>

int main(void)
{
    int dec = 0;
    int bin;
    int mult = 1;
    
    // Le numero binario
    printf("Numero binario: ");
    scanf("%d", &bin);

    while (bin != 0)
    {
        dec += (bin%10) * mult;

        // Prep to next iteration
        bin /= 10;
        mult *= 2;
    }

    printf("Decimal: %d", dec);
    return 0;
}