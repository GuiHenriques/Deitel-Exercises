// Números primos.
# include <stdio.h>
# include <time.h>
# include <math.h>

int prime(int);

int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    start = clock(); // Início da contagem de tempo

    // Código do seu programa

    printf("%-6s%8s\n", "Num", "Primo");
    for (int i = 1; i <= 10000; i++)
    {
        if (prime(i))
            printf("%-6d%7s\n", i, "Sim");
    }
    
    end = clock(); // Fim da contagem de tempo
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tempo: %.3f segundos\n", cpu_time_used);
}

int prime(int n)
{
    int count = 0;
    // int limit = (int) sqrt(n);
    
    // for (int i = 1; i <= limit; i++)
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return 1;
    else
        return 0;
}