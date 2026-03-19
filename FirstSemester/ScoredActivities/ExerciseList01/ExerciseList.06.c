#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2;

    printf("Digite o ponto 1 (x1 y1): ");
    if (scanf("%lf %lf", &x1, &y1) != 2)
        return 1;

    printf("Digite o ponto 2 (x2 y2): ");
    if (scanf("%lf %lf", &x2, &y2) != 2)
        return 1;

    double dx = x2 - x1;
    double dy = y2 - y1;

    // fórmula clássica: pitágoras fingindo que é geometria analítica
    // sim, dava pra enfiar tudo direto no sqrt, mas separar assim evita erro besta
    // e facilita debug quando inevitavelmente alguém troca coordenada
    // já escovei bit de mais na 5.

    double distancia = sqrt(dx * dx + dy * dy);

    printf("\nDistancia Euclidiana: %.2f\n", distancia);

    return 0;
}