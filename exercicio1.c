#include<stdio.h>
int main(){
    int idade;
    printf("digite sua idade: ");
        scanf("%d", &idade);

        if(idade >= 0 && idade <= 12){
            printf("Crianca");
        } 

        else if(idade >= 13 && idade <= 17){
            printf("adolescente");
        }

        else if(idade >= 18 && idade <= 59){
            printf("adulto");
        }
        else if(idade >= 60){
            printf("idoso");
        }

        else{
            printf("idade invalida");
        }



return 0;
}

