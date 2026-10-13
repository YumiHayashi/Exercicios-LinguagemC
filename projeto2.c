#include <stdio.h>

int main(){

 float total_vendas, comissao; // variáveis do tipo float (número real)

    printf("Digite o total de vendas do vendedor: \n"); // o que vai aparecer na tela inicialmente
    scanf("%f", &total_vendas); // lê o número digitado pelo usuário e armazena na variável *total_vendas*

    comissao = total_vendas * 0.10; // calcula a comissão do vendedor (10% do total de vendas) e armazena na variável *comissao*
    printf("A comissão do vendedor foi: %.2f\n", comissao); // o resultado final, mostrando a comissão do vendedor com duas casas decimais

    return 0; // indica que o programa foi finalizado
}