#include <stdio.h>

int main(void)
{
    int number;
    printf("Digite um número inteiro: ");

    if(scanf("%d", &number) !=1)
        return 1;

    number++;
    printf("O número incrementado é: %d\n", number);

    return 0;
}