// Formas com asteriscos.
# include <stdio.h>

int main(void)
{
    // Quadrado 9x9
    int i = 0;
    while (i < 9)
    {
        if (i == 0 || i == 8)
            printf("*********\n");
        else
            printf("*       *\n");
        i++;
    }

}