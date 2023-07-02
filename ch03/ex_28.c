// Valide a entrada do usuário.
# include <stdio.h>

int main(void)
{
    int aprovacoes = 0, total = 10, soma = 0, aluno = 0, nota;

    while (aluno++ < 10)
    {
        do {
            printf("1-Aprovado ou 2-Reprovado: ");
            scanf("%d", &nota);
        } while (nota != 1 && nota != 2);
        
        if (nota == 1)
            aprovacoes++;
    }
    printf("Aprovacoes: %d\n", aprovacoes);
    printf("Reprovacoes: %d\n", 10 - aprovacoes);
        
    if (aprovacoes >= 8)
        printf("Bonus ao instrutor");
    
    return 0;
}