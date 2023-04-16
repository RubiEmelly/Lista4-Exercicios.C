#include <stdio.h>

int main()
{
    float temperatura, resultado;
    int opcao;
    printf("Escolha a opção de conversão: \n");
    printf("1 - Celsius para Farenheit: \n");
    printf("2 - Farenheit para Celsius: \n");
    scanf("%d", &opcao);
    
switch(opcao){
    case 1:
      printf("Digite a termperatura Celsius: \n");
      scanf("%f", &temperatura);
      resultado = (9*temperatura/5) + 32;
      printf("%.2fC = %.2fF\n", temperatura, resultado);
      break;
    
    case 2:
      printf("Digite a termperatura Farenheit: \n");
      scanf("%f", &temperatura);
      resultado = 5* (temperatura - 32) / 9;
      printf("%.2fF = %.2fC\n", temperatura, resultado);
      break;
      
    default:
      printf("Opção Inválida");
      break;
}
}