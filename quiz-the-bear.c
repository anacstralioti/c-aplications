#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int questao1(){
    int pontuacao = 0;
    printf("\nQuest�o n�mero 1: Qual � o nome completo do protagonista de The Bear?\n\n");
    printf("a) Carmine Berzatto\n");
    printf("b) Carmen Berzatto\n");
    printf("c) Carmy Berzatto\n");
    printf("d) Carl Berzatto\n");
    printf("e) Carly Berzatto\n\n");
    char resposta1;
    scanf(" %c", &resposta1);
    if (resposta1 == 'b') {
        printf("\nResposta correta! Carmen Berzatto � o nome completo do protagonista de The Bear.\n");
        pontuacao = 1;
    }

    else{
        printf("\nResposta incorreta! A resposta correta � a letra B.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao2(){
    int pontuacao = 0;
    printf("\nQuest�o n�mero 2: Qual � o principal desafio financeiro que o protagonista enfrenta ao assumir o restaurante??\n\n");
    printf("a) D�vidas acumuladas\n");
    printf("b) Falta de fornecedores\n");
    printf("c) Reformas\n");
    printf("d) Pagamento dos funcion�rios\n");
    printf("e) Aumento do aluguel\n\n");
    char resposta2;
    scanf(" %c", &resposta2);
    if (resposta2 == 'a') {
        printf("\nResposta correta! O principal desafio financeiro eram as d�vidas acumuladas.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta � a letra A.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao3(){
    int pontuacao = 0;
    printf("\nQuest�o n�mero 3: Qual � a profiss�o do protagonista antes de assumir o restaurante da fam�lia?\n\n");
    printf("a) Chef em um restaurante de fast food\n");
    printf("b) Gerente de um caf�\n");
    printf("c) Chef em um restaurante de alta gastronomia\n");
    printf("d) Gerente de um restaurante de alta gastronomia\n");
    printf("e) Gerente de um restaurante de fast food\n\n");
    char resposta3;
    scanf(" %c", &resposta3);
    if (resposta3 == 'c') {
        printf("\nResposta correta! A profiss�o do protagonista antes de assumir o restaurante era Chef em um restaurante de alta gastronomia.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta � a letra C.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao4(){
    int pontuacao = 0;
    printf("\nQuest�o n�mero 4: Qual � a principal raz�o pela qual o protagonista assume o restaurante?\n\n");
    printf("a) Seu amor pela culin�ria\n");
    printf("b) A morte de seu irm�o\n");
    printf("c) O desejo de abrir seu pr�prio restaurante\n");
    printf("d) A morte de sua m�e\n");
    printf("e) O nascimento de seu filho\n\n");
    char resposta4;
    scanf(" %c", &resposta4);
    if (resposta4 == 'b') {
        printf("\nResposta correta! A principal raz�o pela qual o protagonista assume o restaurante � a morte de seu irm�o.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta � a letra B.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao5(){
    int pontuacao = 0;
    printf("\nQuest�o n�mero 5: Qual � o principal tema abordado na s�rie The Bear?\n\n");
    printf("a) O drama familiar\n");
    printf("b) A press�o da ind�stria gastron�mica\n");
    printf("c) Viagens culin�rias pelo mundo\n");
    printf("d) O amor fam�liar\n");
    printf("e) Romance no ambiente de trabalho\n\n");
    char resposta5;
    scanf(" %c", &resposta5);
    if (resposta5 == 'b') {
        printf("\nResposta correta! O principal tema abordado na s�rie � a press�o da ind�stria gastr�nomica.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta � a letra B.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao6(){
    int pontuacao = 0;
    printf("\nQuest�o n�mero 6: Qual � a rea��o inicial da equipe do restaurante ao novo estilo de lideran�a do Protagonista?\n\n");
    printf("a) Relut�ncia e resist�ncia\n");
    printf("b) Entusiasmo e apoio\n");
    printf("c) Indiferen�a\n");
    printf("d) Aceita��o\n");
    printf("e) Felicidade\n\n");
    char resposta6;
    scanf(" %c", &resposta6);
    if (resposta6 == 'a') {
        printf("\nResposta correta! A rea��o inicial da equipe do restaurante ao novo estilo de lideran�a � de relut�ncia e resist�ncia.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta � a letra A.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int pontuacao = 0; // Vari�vel para rastrear a pontua��o do usu�rio

    printf("Bem-vindo(a) ao Quiz da s�rie The Bear!\n\n");
    // Quest�o 1
    pontuacao += questao1(); // pontuacao = pontuacao + ponto;
    // Quest�o 2
    pontuacao += questao2();
    // Quest�o 3
    pontuacao += questao3();
    // Quest�o 4
    pontuacao += questao4();
    // Quest�o 5
    pontuacao += questao5();
    // Quest�o 6
    pontuacao += questao6();

    printf("\n\nPontua��o final: %d de 6 perguntas corretas.\n", pontuacao);
}
