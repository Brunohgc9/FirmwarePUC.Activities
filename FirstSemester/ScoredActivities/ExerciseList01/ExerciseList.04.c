#include <stdio.h>
#include <math.h>

#define CAPITAL_OK (1 << 0)
#define TAXA_OK    (1 << 1)
#define TEMPO_OK   (1 << 2)

int main(void)
{
    double capital, taxa, tempo;
    int flags = 0; // estado inicial: absolutamente nada confiável

    printf("Digite o capital: ");
    if (scanf("%lf", &capital) == 1)
        flags |= CAPITAL_OK;

    printf("Digite a taxa (%% ao mes): ");
    if (scanf("%lf", &taxa) == 1)
        flags |= TAXA_OK;

    printf("Digite o tempo (meses): ");
    if (scanf("%lf", &tempo) == 1)
        flags |= TEMPO_OK;

    // sim, isso poderia ser feito sem bitmask e com menos firula.
    // mas a ideia aqui é controlar estado de forma explícita e barata.
    // além disso, confiar cegamente em scanf é pedir pra depurar bug fantasma depois.

    if ((flags & (CAPITAL_OK | TAXA_OK | TEMPO_OK)) != 
        (CAPITAL_OK | TAXA_OK | TEMPO_OK))
    {
        printf("Erro na entrada de dados.\n");
        return 1;
    }

    taxa /= 100.0;

    // pow não é a coisa mais barata do mundo, mas também não é onde seu programa vai morrer.
    // se isso aqui fosse gargalo, o problema já teria começado bem antes.

    double montante = capital * pow(1 + taxa, tempo);
    double juros = montante - capital;

    printf("\nMontante: %.2f\n", montante);
    printf("Juros: %.2f\n", juros);

    return 0;
}