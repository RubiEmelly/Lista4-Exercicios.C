#include <stdio.h>
#include <math.h>

void calcularValorRaizes(double a, double b, double c) {
    double delta = b*b - 4*a*c;
    double x1, x2, raizDelta;

    if (a == 0) {
        printf("O coeficiente 'A' deve ser diferente de zero.\n");
        return;
    }

    if (delta >= 0) {
        raizDelta = sqrt(delta);
        x1 = (-b + raizDelta) / (2*a);
        x2 = (-b - raizDelta) / (2*a);

        printf("As raizes da equação são: %.2lf e %.2lf\n", x1, x2);
    } else {
        raizDelta = sqrt(-delta);
        x1 = -b / (2*a);
        x2 = raizDelta / (2*a);

        printf("As raizes complexas da equação são: %.2lf + %.2lfi e %.2lf - %.2lfi\n", x1, x2, x1, x2);
    }
}

int main() {
    double a, b, c;

    printf("Entre com os valores dos coeficientes a, b e c da equação do segundo grau:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    calcularValorRaizes(a, b, c);

    return 0;
}