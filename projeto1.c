#include <stdio.h>

int main(){

    float n, d; // variáveis do tipo float (número real)

    printf("Digite um número real: \n"); // o que vai aparecer na tela
    scanf("%f", &n); // lê o número digitado pelo usuário e armazena na variável n

    d = n * 2; // conta o dobro do número digitado e armazena na variável d 
    printf("O dobro do número foi: %.2f\n", d); // o resultado final
}