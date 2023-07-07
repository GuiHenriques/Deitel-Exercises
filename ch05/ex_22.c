// Separando dígitos.
# include <stdio.h>

void separaDigitos(int);

int main(void)
{
    // Dois numeros
    int num1, num2;
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);    

    // a) Parte inteira da divisao
    printf("Parte inteira da divisao: %d\n", num1 / num2);
    
    // b) Parte inteira do modulo
    printf("Parte inteira do modulo: %d\n", num1 % num2);

    // c) Digitos separados por dois espacos
    printf("Numero 1: ");
    separaDigitos(num1);
    printf("\nNumero 2: ");
    separaDigitos(num2);
}


void separaDigitos(int num)
{
    if (num > 0)
    {
        separaDigitos(num / 10);
        printf("%d  ", num % 10);
    }
}