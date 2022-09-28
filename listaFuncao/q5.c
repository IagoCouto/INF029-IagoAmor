#include <stdio.h>

typedef struct {
    int num;
} numero;

numero vetor[4];

ler4Numeros(){
    for (int i = 0; i < 4; i++){
        printf("\nInforme o %dº elemento:\n>>> ", (i + 1));
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

int main()
{
    ler4Numeros();
    for (int i = 0; i < 4; i++){
        printf("\n%dº elemento informado: %d.\n", (i + 1), vetor[i]);

    }
    
}