#include <stdio.h>

int menorNumero(int num1, int num2, int num3){
    if(num1<num2 && num1<num3){
        return num1;
    }else if (num2<num1 && num2<num3){
        return num2;
    }else{
        return num3;
    }
}

int main()
{
    int num1, num2, num3, menor;
    printf("Informe o 1° número: ");
    scanf("%d", &num1);
    printf("Informe o 2° número: ");
    scanf("%d", &num2);
    printf("Informe o 3° número: ");
    scanf("%d", &num3);    
    menor=menorNumero(num1,num2,num3);
    printf("O menor número eh: %d\n", menor);
}