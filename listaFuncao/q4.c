#include <stdio.h>

int vetor[3];

int ler3Numeros(){
    for (int i = 0; i < 3; i++){
        printf("\nInforme o %dº elemento:\n>>> ", (i + 1));
        scanf("%d", &vetor[i]);
    }
    return vetor[3];
}

int main()
{
    ler3Numeros();
    for (int i = 0; i < 3; i++){
        printf("\n%dº elemento informado: %d.\n", (i + 1), vetor[i]);

    }
    
}