#include <stdio.h>

int maiorNumero(int num1, int num2){
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}

int main()
{
    int num1, num2, maior;
    printf("Informe o 1° número: ");
    scanf("%d", &num1);
    printf("Informe o 2° número: ");
    scanf("%d", &num2);
    
    maior=maiorNumero(num1,num2);
    printf("O maior número eh: %d\n", maior);
}