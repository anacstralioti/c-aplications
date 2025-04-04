#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrarOpcoes(){
    printf("********************************************\n");
    printf("*    Programa de Encomendas de Docinhos    *\n");
    printf("*             Pre�o Unit�rio              *\n");
    printf("********************************************\n");
    printf("*          Brigadeiro:   R$ 0,50           *\n");
    printf("*------------------------------------------*\n");
    printf("*          Beijinho:     R$ 0,50           *\n");
    printf("*------------------------------------------*\n");
    printf("*          Dedo de Mo�a: R$ 0,75          *\n");
    printf("*------------------------------------------*\n");
    printf("*          Cajuzinho:    R$ 1,00           *\n");
    printf("********************************************\n");
}

int fazerPedido (char *opcao){
    int quantidade;
    printf("\nInforme a quantidade de %s: ", opcao);
    scanf("%d", &quantidade);
    return quantidade;
}

float calcularPedido(int qtdBrigadeiro, int qtdBeijinho, int qtdDedoMoca, int qtdCajuzinho){
    float total = qtdBrigadeiro*0.5+qtdBeijinho*0.5+qtdDedoMoca*0.75+qtdCajuzinho*1.00;
    return total;
}

void mostrarResultados(float valorTotal){
    printf("\n********************************************\n");
    printf("\nValor total da encomenda ser�: R$%.2f\n", valorTotal);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int qtdBrigadeiro, qtdBeijinho, qtdDedoMoca, qtdCajuzinho;
    float total;
    mostrarOpcoes();
    qtdBrigadeiro = fazerPedido("Brigadeiros");
    qtdBeijinho = fazerPedido("Beijinhos");
    qtdDedoMoca = fazerPedido("Dedo de Mo�as");
    qtdCajuzinho = fazerPedido("Cajuzinhos");
    total = calcularPedido(qtdBrigadeiro, qtdBeijinho, qtdDedoMoca, qtdCajuzinho);
    mostrarResultados(total);
}
