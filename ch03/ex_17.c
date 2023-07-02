// Consumo de gasolina.
# include <stdio.h>

int main(void)
{
    // Inicialização
    float litros, quilometros, consumo;
    
    float somaLitros = 0;
    float somaQuilometros = 0;
    float consumoTotal;

    printf("Litros (-1 para sair): ");
    scanf("%f", &litros);

    while (litros != -1)
    {
        printf("Quilometros: ");
        scanf("%f", &quilometros);

        // Processa consumo
        consumo = quilometros / litros;
        printf("Consumo: %.3fkm/L\n\n", consumo);

        // Soma totais
        somaLitros += litros;
        somaQuilometros += quilometros;
    
        // Le proxima entrada
        printf("Litros (-1 para sair): ");
        scanf("%f", &litros);
    }

    consumoTotal = somaQuilometros / somaLitros;

    printf("Consumo Geral: %.3fkm/L", consumoTotal);

}