#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void showOptions(){
    printf("**** Custom T-Shirt Order Program - Style Factory ****\n");
    printf("* - Unit Price of Customized T-Shirts     *\n");
    printf("* - Size S: $14.99                        *\n");
    printf("* - Size M: $17.99                        *\n");
    printf("* - Size L: $19.99                        *\n");
    printf("******************************************************\n");
}

int makeOrder(char *size){
    int quantity;
    printf("\nEnter the quantity of size %s t-shirts: ", size);
    scanf("%d", &quantity);
    return quantity;
}

float calculateOrder(int qtyS, int qtyM, int qtyL){
    float total = qtyS*14.99 + qtyM*17.99 + qtyL*19.99;
    return total;
}

void showResults(float totalValue){
    printf("\nTotal order value: $%.2f\n", totalValue);
    printf("\nYour order will be delivered in 7 days.\n");
}

int main(){
    setlocale(LC_ALL, "English");
    int qtyS, qtyM, qtyL;
    float total;
    showOptions();
    qtyS = makeOrder("S");
    qtyM = makeOrder("M");
    qtyL = makeOrder("L");
    total = calculateOrder(qtyS, qtyM, qtyL);
    showResults(total);
}
