#include<stdio.h>

int main(){

   char operador;
   
   printf("Digite um numero DE (1-7): ");
   scanf(" %c", &operador);

   switch (operador)
   {
   case '1':
    printf("DOMINGO");
    break;

    case '2':
    printf("SEGUNDA");
    break;
   
    case '3':
    printf("TERÇA");
    break;

    case '4':
    printf("QUARTA");
    break;

    
    case '5':
    printf("QUINTA");
    break;

    
    case '6':
    printf("SEXTA");
    break;
   
    case '7':
    printf("SABADO");
    break;

    default:
    printf("Numero invalido! Digite um numero de 1 a 7.");

    break;
   }

    
    
    return 0;
}