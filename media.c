#include <stdio.h>

int main(){

float nota1;
float nota2;
float nota3;
float nota4;
float soma;
float soma1;
float media;
float media1;

nota1 = 7.0;
nota2 = 9.0;

nota3 = 7.0;
nota4 = 8.0;

soma = nota1 + nota2;
soma1 = nota3 + nota4;

media = soma / 2.0;
media1 = soma1 / 2.0;

printf("Média aluno 1, %.2f\n", media);
printf("Soma do aluno 1, %.2f\n", soma);

printf("---------------------\n"),

printf("Média aluno 2, %.2f\n", media1);
printf("Soma do aluno 2, %.2f\n", soma1);

}