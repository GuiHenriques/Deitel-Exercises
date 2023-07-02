// Ache o número maior.
# include <stdio.h>

int main(void)
{
    // Inicialização
    int contador = 0;
    int maior = 0;
    int numero;

    // Loop
    while (contador++ < 10)
    {
    // Entradas
    printf("Numero: ");
    scanf("%d", &numero);

    // Verificar maior
    if (numero > maior)
        maior = numero;

    }
    
    // Mostrar maior
    printf("Maior: %i", maior);
}