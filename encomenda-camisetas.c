#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrarOpcoes(){
    printf("**** Programa de Encomendas - Fábrica Estilo ****\n");
    printf("* - Preço Unitário das Camisetas Personalizadas *\n");
    printf("* - Tamanho P: R$ 14,99                         *\n");
    printf("* - Tamanho M: R$ 17,99                         *\n");
    printf("* - Tamanho G: R$ 19,99                         *\n");
    printf("*************************************************\n");
}

int fazerPedido (char *opcao){
    int quantidade;
    printf("\nInforme a quantidade de camisetas %s: ", opcao);
    scanf("%d", &quantidade);
    return quantidade;
}

float calcularPedido(int qtdP, int qtdM, int qtdG){
    float total = qtdP*14.99+qtdM*17.99+qtdG*19.99;
    return total;
}

void mostrarResultados(float valorTotal){
    printf("\nValor total da encomenda: R$%.2f\n", valorTotal);
    printf("\nSeu pedido será entregue em 7 dias.\n");
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int qtdP, qtdM, qtdG;
    float total;
    mostrarOpcoes();
    qtdP = fazerPedido("P");
    qtdM = fazerPedido("M");
    qtdG = fazerPedido("G");
    total = calcularPedido(qtdP, qtdM, qtdG);
    mostrarResultados(total);
}
