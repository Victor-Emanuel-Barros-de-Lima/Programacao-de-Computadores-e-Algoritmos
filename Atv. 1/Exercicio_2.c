#include <stdio.h>

int main() {
    char nome[128];
    int idade, sexo;
    printf("Digite o nome: ");
    scanf("%s", &nome);
    printf("Digite a idade: ");
    scanf("%i", &idade);
    printf("Digite o sexo, sendo 1 para masculino ou 2 para femino: ");
    scanf("%i", &sexo);
    
    if (sexo == 1){
        printf("O %s e Homem", nome);
        gets(nome);
    }
    
    if (sexo == 2){
        printf("A %s e Mulher", nome);
        gets(nome);
    }
    
    return 0;
}