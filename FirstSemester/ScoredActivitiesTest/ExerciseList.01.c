#include <stdio.h>

int main()
{
    int chosenExercise;

    switch (chosenExercise)
    {
        case 1:
            printf("Exercício 1 selecionado.");
            break;
        case 2:
            printf("Exercício 2 selecionado.");
            break;
        case 3:
            printf("Exercício 3 selecionado.");
            break;
        default:
            printf("Exercício inválido.");
    }
}