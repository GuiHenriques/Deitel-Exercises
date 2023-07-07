// Padrão de asteriscos em xadrez.
# include <stdio.h>

int main(void)
{
    int n = 0;
    while (n < 8)
    {
        if (n++ % 2 == 0)
        {
            int j = 0;
            while (j++ < 8)
            {
                printf("*");
                printf(" ");
            }
        }

        else
        {
            int j = 0;
            while (j++ < 8)
            {
                printf(" ");
                printf("*");
            }
            
        }
        printf("\n");
    }
}