#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado(){
    return (rand()%6)+1;
}

int main()
{
    int n=100000;
    int freq[7] ={0};
    srand(time(NULL));
    for(int i=0; i<n; i++){
        int num = Dado();
        freq[num] ++;
    }
    printf("Frequência de cada número: \n");
    for(int i=1; i<7; i++){
        float porcentagem = ((float) freq[i]/n) * 100;
        printf("%d: %d vezes (%.2f %%)\n", i, freq[i], porcentagem);
    }
}