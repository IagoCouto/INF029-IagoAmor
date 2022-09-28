#include <stdio.h>
#include <string.h>

char nome[50];
int dataNascimento_dia;
int dataNascimento_mes;
int dataNascimento_ano;
char cpf[12];
char opsexo[1];

int validarNome(){
    int x;
    do{
        printf("Nome Cliente:\n >>> ");
        fflush(stdin);
        fgets(nome, 50, stdin);
        for(int i=0; nome[i]; i++) if(nome[i] =='\n') nome[i]=0;
        x = strlen(nome);
        if (x > 20){
            printf("Quantidade limite de carateres atingida.\n");
        }

    } while (x > 20);
}

int validarSexo(){
    int x;
    do{
        x=0;
        printf("Digite o sexo (F / M / O):\n >>> ");
        scanf("%c", &opsexo);
        getchar();
        if(opsexo == (('f')||('F')||('m')||('M')||('o')||('O'))){
            printf("\n***** Opcao Invalida! ****\n");
            x = -1;
        } else{
            x = 0;        }
        
    } while(x = -1);
}
    
int cadastrarCliente(){
    printf("Data nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dataNascimento_dia, &dataNascimento_mes, &dataNascimento_ano);
    
    printf("CPF Cliente:\n >>> ");
    scanf("%s", &cpf);
}


int main()
{
    validarNome();
    validarSexo();
    cadastrarCliente();
    printf("\nNome: %s", nome);
    printf("\nData nascimento: %d/%d/%d", dataNascimento_dia, dataNascimento_mes, dataNascimento_ano);
    printf("\nCPF: %s", cpf);
    printf( "\nSexo: %c", opsexo);
    
}