#include <stdio.h>

int main()
{   
    int num1, num2, num3;
    
    printf("Quais números deseja subtrair?\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    int subtracao(int n1, int n2, int n3);
    int res = subtracao(num1, num2, num3);
  
    printf("O resultado da subtração é: %d", res);
    
    return 0;
    
}

int subtracao(int n1, int n2, int n3) {
    
    int resultado = n1 - n2 - n3;
    
    return resultado;
}