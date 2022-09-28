#include <stdio.h>

int main()
{   
    int num1, num2;
    
    printf("Quais números deseja somar?\n");
    scanf("%d%d", &num1, &num2);
    
    int soma(int n1, int n2);
    int res = soma(num1, num2);
  
    printf("%d", res);
    
    return 0;
    
}

int soma(int n1, int n2) {
    
    int resultado = n1 + n2;
    
    return resultado;
}