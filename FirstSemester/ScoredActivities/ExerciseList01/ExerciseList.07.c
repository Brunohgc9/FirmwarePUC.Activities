#include <stdio.h>

int main(void)
{
    int a, b, c, d = 1;
    // declara 4 inteiros; só o d começa inicializado (vale 1)
    // a, b e c começam com lixo, aqui isso não quebra porque vamos atribuir antes de usar

    a = -2;
    // a agora vale -2

    b = a * a;
    // b = (-2) * (-2) = 4
    // multiplicação simples, nada suspeito ainda

    c = d++;
    // pós-incremento: primeiro usa o valor atual de d, depois incrementa
    // então:
    // c recebe 1
    // d vira 2

    d = c++ + 5;
    // mesma lógica do pós-incremento:
    // c ainda vale 1 nesse momento → d = 1 + 5 = 6
    // depois disso, c vira 2

    d = ++c + 5;
    // pré-incremento: primeiro incrementa, depois usa
    // c era 2 → vira 3 antes da conta
    // d = 3 + 5 = 8

    printf("%d %d %d %d", a, b, c, d);
    // imprime os valores finais

    return 0;
}