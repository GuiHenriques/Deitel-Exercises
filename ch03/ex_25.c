// Saída tabular
# include <stdio.h>

int main(void)
{
    int n = 1;
    
    // Print Header
    printf("%s\t%s\t%s\t%s\n", "N", "10*N", "100*N", "1000*N");

    while (n++ <= 10)
    {
        printf("%d\t%d\t%d\t%d\n", n, n*10, n*100, n*1000);
    }
}