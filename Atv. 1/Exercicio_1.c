#include<stdio.h>

int main(void) {
    int area, base, altura;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite a altura: ");
    scanf("%d", &altura);
    area = base * altura/2;
    printf("A area do Triangulo e: %d", area);
}