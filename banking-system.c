#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int password, confirmPassword;
float balance;

void printOptions(){
    printf("+++++++++++++++++++++++++++++++++++++++\n");
    printf("+           Banking System            +\n");
    printf("+       Choose an option below:      +\n");
    printf("+   1 - Open Account                  +\n");
    printf("+   2 - Deposit                       +\n");
    printf("+   3 - Withdraw                      +\n");
    printf("+   4 - Statement                     +\n");
    printf("+   5 - PIX Area (Transfer)          +\n");
    printf("+   6 - Pay Boleto                   +\n");
    printf("+   7 - Exit                          +\n");
    printf("+++++++++++++++++++++++++++++++++++++++\n");
}

void openAccount(){
    printf("Opening account...\nPlease set your password:\n");
    scanf(" %d", &password);
    balance = 0.0;
    printf("Account successfully created!\n");
}

void deposit(){
    float amount;
    printf("Enter an amount to deposit:\n");
    scanf(" %f", &amount);
    balance += amount;
    if(amount <= 0){
        printf("Invalid amount for deposit.\n");
    } else {
        printf("Deposit successful.\n");
        printf("New balance: $ %.2f\n", balance);
    }
}

void withdraw(){
    float amount;
    printf("Enter an amount to withdraw:\n");
    scanf(" %f", &amount);
    printf("Enter your password:\n");
    scanf(" %d", &confirmPassword);
    if(confirmPassword == password){
        if(amount > balance) {
            printf("Insufficient funds. Current balance: $ %.2f.\n", balance);
        } else {
            balance -= amount;
            printf("Withdrawal successful.\n");
            printf("New balance: $ %.2f\n", balance);
        }
    } else {
        printf("Incorrect password. Operation canceled.\n");
    }
}

void statement(){
    printf("Your current balance is: $ %.2f\n", balance);
}

void transfer(){
    float amount;
    printf("Enter the amount to transfer:\n");
    scanf(" %f", &amount);
    printf("Enter your password:\n");
    scanf(" %d", &confirmPassword);
    if(confirmPassword == password){
        if (amount > balance) {
            printf("Insufficient funds for transfer. Current balance: $ %.2f.\n", balance);
        } else if (amount <= 0){
            printf("Invalid transfer amount.\n");
        } else {
            balance -= amount;
            printf("Transfer of $ %.2f completed successfully!\n", amount);
            printf("New balance: $ %.2f\n", balance);
        }
    } else {
        printf("Incorrect password. Operation canceled.\n");
    }
}

void payBoleto() {
    float paymentAmount;
    int boletoNumber;
    printf("Enter the boleto number:\n");
    scanf("%d", &boletoNumber);
    printf("Enter the amount to pay:\n");
    scanf("%f", &paymentAmount);
    printf("Enter your password:\n");
    scanf(" %d", &confirmPassword);
    if(confirmPassword == password){
        if (paymentAmount > balance) {
            printf("Insufficient funds for payment. Current balance: $ %.2f.\n", balance);
        } else if (paymentAmount <= 0) {
            printf("Invalid payment amount.\n");
        } else {
            balance -= paymentAmount;
            printf("Payment of $ %.2f completed successfully!\n", paymentAmount);
            printf("New balance: $ %.2f\n", balance);
        }
    } else {
        printf("Incorrect password. Operation canceled.\n");
    }
}

int main(){
    int option;
    while(true){
        printOptions();
        scanf(" %d", &option);
        if(option == 1){
            openAccount();
        }
        else if(option == 2){
            deposit();
        }
        else if(option == 3){
            withdraw();
        }
        else if(option == 4){
            statement();
        }
        else if(option == 5){
            transfer();
        }
        else if(option == 6){
            payBoleto();
        }
        else if(option == 7){
            printf("Exiting system...\n");
            exit(0);
        }
    }
}