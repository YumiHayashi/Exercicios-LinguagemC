#include <stdio.h>

int main(){

    float comprimento, largura, area; // variáveis do tipo float (número real)

    printf("Digite o comprimento do terreno: \n"); // o que vai aparecer na tela primeiro
    scanf("%f", &comprimento); // lê o número digitado pelo usuário e armazena na variável *comprimento*
    printf("Digite a largura do terreno: \n"); // o que vai aparecer na tela depois
    scanf("%f", &largura); // lê o número digitado pelo usuário e armazena na variável *largura*

    area = comprimento * largura; // calcula a área do terreno e armazena na variável *area*
    printf("A área do terreno é : %.2f\n", area); // o resultado final, mostrando a área do terreno com duas casas decimais

    return 0; // indica que o programa foi finalizado
    
}