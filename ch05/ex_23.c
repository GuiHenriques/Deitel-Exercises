// Tempo em segundos.
# include <stdio.h>

int toSeconds(int, int, int);

int main(void) {
    int h1, m1, s1, secs1;
    int h2, m2, s2, secs2;

    printf("Digite o tempo em horas, minutos e segundos:\n");
    printf("Tempo 1: ");
    scanf("%d %d %d", &h1, &m1, &s1);
    secs1 = toSeconds(h1, m1, s1);
    
    printf("Tempo 2: ");
    scanf("%d %d %d", &h2, &m2, &s2);
    secs2 = toSeconds(h2, m2, s2);
    
    printf("Diferenca: %d segundos\n", secs2 - secs12);
    return 0;
}

int toSeconds(int h, int m, int s) {
    int secs = h * 3600 + m * 60 + s;
    if (secs > 43200) {
        secs -= 43200;
    } else {
        secs += 43200;
    } return secs;
}