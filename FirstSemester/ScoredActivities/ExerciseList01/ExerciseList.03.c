#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //vou usar bitwise com XOR para inverter, pura gracinha minha, 
    //mas em sistemas embarcados isso é mais rapido do que usar uma variavel auxiliar, então ta valendo

    int numA;
    int numB;

    printf("Digite o primeiro numero: ");
    if (scanf("%d", &numA) != 1)
        return 1;

    printf("Digite o segundo numero: ");
    if (scanf("%d", &numB) != 1)
        return 1;

    numA = numA ^ numB;
    numB = numA ^ numB;
    numA = numA ^ numB;

    printf("\nPrimeiro numero depois da inversão: %d\n", numA);
    printf("Segundo numero depois da inversão: %d\n", numB);

    return 0;
}