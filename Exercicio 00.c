#include <stdio.h>

void parOuImpar(int num){
    if(num%2==0){
        printf("%d é par\n", num);
    }else{
        printf("%d é ímpar\n", num);
    }
}

int main(){
    int num;
    printf("Insira um número: ");
    scanf("%d", &num);
    parOuImpar(num);
    return 0;
}

