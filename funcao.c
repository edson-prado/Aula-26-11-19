#include <stdio.h>

double calcularMedia(double a,double b){
    double soma = a + b;
    return soma / 2.0;
}

int main(){
    double mediaFinal = calcularMedia(8.0, 7.5);

    printf("A Média é: %.2f\n", mediaFinal);
    return 0;
}