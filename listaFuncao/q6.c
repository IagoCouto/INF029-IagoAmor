#include <stdio.h>

typedef struct {
    char letra;
} letras;

letras vetor[3];

ler3Letras(){
    for (int i = 0; i < 3; i++){
        printf("\nInforme a %dª letra:\n>>> ", (i + 1));
        scanf("%c", &vetor[i]);
        getchar();
        
    }
    return vetor;
}

int main()
{
    ler3Letras();
    for (int i = 0; i < 3; i++){
        printf("\n%dª letra informada: %c.\n", (i + 1), vetor[i]);

    }
}