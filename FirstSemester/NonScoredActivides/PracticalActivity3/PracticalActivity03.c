#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

void Activity01();
void Activity02();
void Activity03();

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "");

    int activity;

    printf("Escolha a atividade a ser executada (1-3): ");
    scanf("%d", &activity);
    getchar(); // limpa buffer

    switch (activity)
    {
    case 1:
        Activity01();
        break;
    case 2:
        Activity02();
        break;
    case 3:
        Activity03();
        break;
    default:
        printf("Atividade inválida.");
        return 1;
    }

    return 0;
}

void Activity01()
{
    char name[50];
    char address[100];
    char gender[4];
    float weight;

    printf("Insira seu nome: ");
    fgets(name, sizeof(name), stdin);

    printf("Insira seu endereço: ");
    fgets(address, sizeof(address), stdin);

    printf("Insira seu gênero (M/F): ");
    fgets(gender, sizeof(gender), stdin);

    printf("Insira seu peso: ");
    scanf("%f", &weight);

    printf("\nInformações inseridas:\n");
    printf("Nome: %sEndereço: %sGênero: %sPeso: %.2f\n",
           name, address, gender, weight);
}

void Activity02()
{
    int num1, num2;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Quadrado de Cada Número: %.0f, %.0f\n",
           pow(num1, 2), pow(num2, 2));

    printf("Média dos dois números com aproximação: %d\n",
           (int)round((num1 + num2) / 2.0));
}

void Activity03()
{
    char buffer[10];
    char *end;
    int bornYear;

    printf("Insira o ano de nascimento: ");
    fgets(buffer, sizeof(buffer), stdin);

    bornYear = strtol(buffer, &end, 10);

    printf("Idade atual (2026): %d\n", 2026 - bornYear);
    printf("Idade em 2050: %d\n", 2050 - bornYear);
}