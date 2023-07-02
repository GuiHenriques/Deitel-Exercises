// Padrão de asteriscos alternados.
#include <stdio.h>

int main(void)
{
    for (int n = 0; n <= 8; n++)
    {
        if (n%2 == 0)
            printf("* * * * * * * * \n");
        else
            printf(" * * * * * * * *\n");
    }
}