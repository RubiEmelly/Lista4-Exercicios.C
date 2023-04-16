#include <stdio.h>
#include <math.h>

float calcularDelta(float a, float b, float c){
    float delta = pow(b,2)-4*a*c;
    return delta;
}

int main(){
    float a,b,c,delta;
    printf("Insira o valor A: ");
    scanf("%f", &a);
    printf("Insira o valor B: ");
    scanf("%f", &b);
    printf("Insira o valor C: ");
    scanf("%f", &c);  
    delta =calcularDelta(a,b,c);
    printf("O delta é: %f\n", delta);
    return 0;
}
