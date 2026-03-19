#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grades[3];
    double calculations[3] = {0, 0, 1}; 

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        if (scanf("%d", &grades[i]) != 1)
            return 1;

        calculations[0] += grades[i];        
        calculations[1] += grades[i] / 3.0;  
        calculations[2] *= grades[i];
    }

    printf("\nSoma: %.2f\n", calculations[0]);
    printf("Media: %.2f\n", calculations[1]);
    printf("Produto: %.2f\n", calculations[2]);

    return 0;
}