#include <stdio.h>

int numPositivo (int numero){
    if(numero >= 0){
        printf("%d eh um numéro positivo", numero);
    }else{
        printf("%d eh um numéro negativo", numero);
    }
}

int main()
{
    int numero;
    printf("Digite um número: \n");
    scanf("%d", &numero);

    numPositivo(numero);
}
