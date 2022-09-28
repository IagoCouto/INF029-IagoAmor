#include <stdio.h>

int main() {
    
    int num; 
    int fatorial;
    
    printf("Qual número deseja o fatorial?\n");
    scanf("%d", &num);
    
    int fatorar(int x);
    fatorial = fatorar(num);
    
    printf("O fatorial desse número é: %d", fatorial);
    return 0;
}

int fatorar(int x) {
    
    int fat;
    
    if (x>=0) { 
        for(fat = 1; x > 1; x = x - 1)
        fat = fat * x;
			  return fat;
					
    } else {
        printf("Não foi possível realizar o fatorial.");
				return 0;
    }
    

    
}