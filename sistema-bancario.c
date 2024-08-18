#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

// Variáveis globais
int senha, confirmarSenha;
float saldo;

void imprimirOpcoes(){
    printf("+++++++++++++++++++++++++++++++++++++++\n");
    printf("+          Sistema Bancário           +\n");
    printf("+      Digite a opção desejada:       +\n");
    printf("+   1 - Abrir conta                   +\n");
    printf("+   2 - Depositar                     +\n");
    printf("+   3 - Sacar                         +\n");
    printf("+   4 - Extrato                       +\n");
    printf("+   5 - Área PIX (transferência)      +\n");
    printf("+   6 - Pagamento de boleto           +\n");
    printf("+   7 - Sair                          +\n");
    printf("+++++++++++++++++++++++++++++++++++++++\n");
}

void abrirConta(){
    printf("Abrindo conta...\nInsira sua senha:\n");
    scanf(" %d", &senha);
    saldo = 0.0; // Zera o saldo
    printf("Conta criada com sucesso!\n");
}

void depositar(){
    float valor;
    printf("Insira um valor a ser depositado:\n");
    scanf(" %f", &valor);
    saldo += valor;
    if(valor <= 0){
        printf("Valor inválido para depósito.\n");
    }else{
        printf("Operação realizada com sucesso.\n");
        printf("Novo saldo: R$ %.2f\n", saldo);
    }
}

void sacar(){
    float valor;
    printf("Insira um valor a ser sacado:\n");
    scanf(" %f", &valor);
    printf("Digite sua senha:\n");
    scanf(" %d", &confirmarSenha);
    if(confirmarSenha == senha){
        if(valor > saldo) {
            printf("Saldo insuficiente para realizar o saque. Saldo atual: R$ %.2f.\n", saldo);
        }else{
            saldo -= valor;
            printf("Saque realizado com sucesso.\n");
            printf("Novo saldo: R$ %.2f\n", saldo);
        }
    }else{
        printf("Senha incorreta. Operação cancelada.\n");
    }
}

void extrato(){
    printf("Seu saldo atual é: R$ %.2f\n", saldo);
}

void transferencia(){
    float valor;
    printf("Qual é o valor da transferência?\n");
    scanf(" %f", &valor);
    printf("Digite sua senha:\n");
    scanf(" %d", &confirmarSenha);
    if(confirmarSenha == senha){
        if (valor > saldo) {
            printf("Saldo insuficiente para realizar a transferência. Saldo atual: R$ %.2f.\n", saldo);
        } else if (valor <= 0){
            printf("Valor inválido para transferência\n");
        }else {
            saldo -= valor;
            printf("Transferência de R$ %.2f realizada com sucesso!\n", valor);
            printf("Novo saldo: R$ %.2f\n", saldo);
        }
    }else{
        printf("Senha incorreta. Operação cancelada.\n");
    }
}

void pagamentoBoleto() {
    float valorPagamento;
    int numeroBoleto;
    printf("Insira o número do boleto:\n");
    scanf("%d", &numeroBoleto);
    printf("Insira o valor a ser pago:\n");
    scanf("%f", &valorPagamento);
    printf("Digite sua senha:\n");
    scanf(" %d", &confirmarSenha);
    if(confirmarSenha == senha){
        if (valorPagamento > saldo) {
            printf("Saldo insuficiente para realizar o pagamento. Saldo atual: R$ %.2f.\n", saldo);
        } else if (valorPagamento <= 0) {
            printf("Valor inválido para pagamento.\n");
        } else {
            saldo -= valorPagamento;
            printf("Pagamento de R$ %.2f realizado com sucesso!\n", valorPagamento);
            printf("Novo saldo: R$ %.2f\n", saldo);
        }
    } else {
        printf("Senha incorreta. Operação cancelada.\n");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    while(true){
        imprimirOpcoes();
        scanf(" %d", &opcao);
        if(opcao == 1){
            abrirConta();
        }
        else if(opcao == 2){
            depositar();
        }
        else if(opcao == 3){
            sacar();
        }
        else if(opcao == 4){
            extrato();
        }
        else if(opcao == 5){
            transferencia();
        }
        else if(opcao == 6){
            pagamentoBoleto();
        }
        // Critério de parada
        else if(opcao == 7){
            printf("Sistema encerrando...\n");
            exit(0);
        }
    }
}
