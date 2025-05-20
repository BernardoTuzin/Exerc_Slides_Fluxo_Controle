#include <stdio.h>

int main()
{
    int senha, cargo;

    printf("Digite sua senha: \n");
    scanf("%d", &senha);

    if (senha == 1234)
    {
        printf("senha correta, informe o cargo\n");
        printf("1 - admin\n");
        printf("2 - gerente\n");
        printf("3 - funcionario\n");
        printf("Digite o numero do seu cargo;\n");
        scanf(" %d", &cargo);

        switch (cargo)
        {
        case 1:
            printf("Acesso total do sistema\n");
            break;

         case 2:
            printf("Acesso parcial do sistema(relatorios e estuque)\n");
            break;

         case 3:
            printf("Acesso basico do sistema(apenas consultas)\n");
            break;

        default:
            printf("cargo invalido\n");
            break;
        }
    } else{
        printf("senha invalida\n");
    }
    
    

    return 0;}
