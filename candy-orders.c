#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void showOptions(){
    printf("********************************************\n");
    printf("*       Sweet Orders Program               *\n");
    printf("*              Unit Price                  *\n");
    printf("********************************************\n");
    printf("*        Brigadeiro:     $ 0.50            *\n");
    printf("*------------------------------------------*\n");
    printf("*        Beijinho:       $ 0.50            *\n");
    printf("*------------------------------------------*\n");
    printf("*        Dedo de Moça:    $ 0.75            *\n");
    printf("*------------------------------------------*\n");
    printf("*        Cajuzinho:      $ 1.00            *\n");
    printf("********************************************\n");
}

int takeOrder(char *itemName){
    int quantity;
    printf("\nEnter the quantity of %s: ", itemName);
    scanf("%d", &quantity);
    return quantity;
}

float calculateTotal(int qtdBrigadeiro, int qtdBeijinho, int qtdDedoMoca, int qtdCajuzinho){
    float total = qtdBrigadeiro * 0.5 + qtdBeijinho * 0.5 + qtdDedoMoca * 0.75 + qtdCajuzinho * 1.00;
    return total;
}

void showResult(float totalAmount){
    printf("\n********************************************\n");
    printf("\nTotal order amount: $%.2f\n", totalAmount);
}

int main(){
    int qtdBrigadeiro, qtdBeijinho, qtdDedoMoca, qtdCajuzinho;
    float total;
    
    showOptions();
    
    qtdBrigadeiro = takeOrder("Brigadeiros");
    qtdBeijinho = takeOrder("Beijinhos");
    qtdDedoMoca = takeOrder("Dedo de Moças");
    qtdCajuzinho = takeOrder("Cajuzinhos");
    
    total = calculateTotal(qtdBrigadeiro, qtdBeijinho, qtdDedoMoca, qtdCajuzinho);
    showResult(total);
}