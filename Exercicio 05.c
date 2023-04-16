#include <stdio.h>

int menorNumero(int num1, int num2){
    if(num1<num2){
        return num1;
    }else{
        return num2;
    }
}

int main()
{
    int num1, num2, menor;
    printf("Informe o 1° número: ");
    scanf("%d", &num1);
    printf("Informe o 2° número: ");
    scanf("%d", &num2);
    
    menor=menorNumero(num1,num2);
    printf("O menor número eh: %d\n", menor);
}