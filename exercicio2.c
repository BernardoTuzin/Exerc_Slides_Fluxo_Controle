#include<stdio.h>
int main(){
    float num1, num2, resultado;
    char operacao;

        printf("digite o primeiro numero :");
        scanf("%f", &num1);
        printf("digite o segundo numero:  ");
        scanf("%f", &num2);
        
        printf("escolha uma opcao(+.-,*,/)");
        scanf(" %c", &operacao);

        switch (operacao)
        {
        case '+':
            resultado = num1 +num2;
                printf("resutado é %.2f", resultado);
        break;

        case '-':
            resultado = num1 - num2;
            printf("resutado é %.2f", resultado);
            break;
        
        case '*':
            resultado = num1 * num2;
            printf("resutado é %.2f", resultado);
        break;

        case '/':
        if (num2 == 0) {
            printf("Erro: Divisao por zero nao permitida.\n");
        } else {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        }
        break;

        
        default:
            break;
        }


    return 0;
}