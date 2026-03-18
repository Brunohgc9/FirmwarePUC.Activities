#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int years;
    int currentYear;
    char firstNameLetter;
    char lastNameLetter;
    char buffer[10];

    printf("Digite a sua idade: ");
    if (scanf("%d", &years) != 1)
        return 1;

    getchar(); 

    printf("Digite a letra inicial do seu primeiro nome: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        return 1;

    firstNameLetter = buffer[0];

    printf("Digite a letra inicial do seu sobrenome: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        return 1;

    lastNameLetter = buffer[0];

    time_t t = time(NULL);
    struct tm *data = localtime(&t);
    currentYear = data->tm_year + 1900;

    printf("\nAno atual: %d\n", currentYear);
    printf("Ano em que voce tera %d anos: %d\n", years, currentYear + years);
    printf("Suas iniciais: %c%c\n", firstNameLetter, lastNameLetter);

    return 0;
}