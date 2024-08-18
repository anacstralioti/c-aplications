#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int questao1(){
    int pontuacao = 0;
    printf("\nQuestão número 1: Qual é o nome completo do protagonista de The Bear?\n\n");
    printf("a) Carmine Berzatto\n");
    printf("b) Carmen Berzatto\n");
    printf("c) Carmy Berzatto\n");
    printf("d) Carl Berzatto\n");
    printf("e) Carly Berzatto\n\n");
    char resposta1;
    scanf(" %c", &resposta1);
    if (resposta1 == 'b') {
        printf("\nResposta correta! Carmen Berzatto é o nome completo do protagonista de The Bear.\n");
        pontuacao = 1;
    }

    else{
        printf("\nResposta incorreta! A resposta correta é a letra B.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao2(){
    int pontuacao = 0;
    printf("\nQuestão número 2: Qual é o principal desafio financeiro que o protagonista enfrenta ao assumir o restaurante??\n\n");
    printf("a) Dívidas acumuladas\n");
    printf("b) Falta de fornecedores\n");
    printf("c) Reformas\n");
    printf("d) Pagamento dos funcionários\n");
    printf("e) Aumento do aluguel\n\n");
    char resposta2;
    scanf(" %c", &resposta2);
    if (resposta2 == 'a') {
        printf("\nResposta correta! O principal desafio financeiro eram as dívidas acumuladas.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta é a letra A.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao3(){
    int pontuacao = 0;
    printf("\nQuestão número 3: Qual é a profissão do protagonista antes de assumir o restaurante da família?\n\n");
    printf("a) Chef em um restaurante de fast food\n");
    printf("b) Gerente de um café\n");
    printf("c) Chef em um restaurante de alta gastronomia\n");
    printf("d) Gerente de um restaurante de alta gastronomia\n");
    printf("e) Gerente de um restaurante de fast food\n\n");
    char resposta3;
    scanf(" %c", &resposta3);
    if (resposta3 == 'c') {
        printf("\nResposta correta! A profissão do protagonista antes de assumir o restaurante era Chef em um restaurante de alta gastronomia.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta é a letra C.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao4(){
    int pontuacao = 0;
    printf("\nQuestão número 4: Qual é a principal razão pela qual o protagonista assume o restaurante?\n\n");
    printf("a) Seu amor pela culinária\n");
    printf("b) A morte de seu irmão\n");
    printf("c) O desejo de abrir seu próprio restaurante\n");
    printf("d) A morte de sua mãe\n");
    printf("e) O nascimento de seu filho\n\n");
    char resposta4;
    scanf(" %c", &resposta4);
    if (resposta4 == 'b') {
        printf("\nResposta correta! A principal razão pela qual o protagonista assume o restaurante é a morte de seu irmão.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta é a letra B.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao5(){
    int pontuacao = 0;
    printf("\nQuestão número 5: Qual é o principal tema abordado na série The Bear?\n\n");
    printf("a) O drama familiar\n");
    printf("b) A pressão da indústria gastronômica\n");
    printf("c) Viagens culinárias pelo mundo\n");
    printf("d) O amor famíliar\n");
    printf("e) Romance no ambiente de trabalho\n\n");
    char resposta5;
    scanf(" %c", &resposta5);
    if (resposta5 == 'b') {
        printf("\nResposta correta! O principal tema abordado na série é a pressão da indústria gastrônomica.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta é a letra B.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int questao6(){
    int pontuacao = 0;
    printf("\nQuestão número 6: Qual é a reação inicial da equipe do restaurante ao novo estilo de liderança do Protagonista?\n\n");
    printf("a) Relutância e resistência\n");
    printf("b) Entusiasmo e apoio\n");
    printf("c) Indiferença\n");
    printf("d) Aceitação\n");
    printf("e) Felicidade\n\n");
    char resposta6;
    scanf(" %c", &resposta6);
    if (resposta6 == 'a') {
        printf("\nResposta correta! A reação inicial da equipe do restaurante ao novo estilo de liderança é de relutância e resistência.\n");
        pontuacao = 1;
    }
    else{
        printf("\nResposta incorreta! A resposta correta é a letra A.\n");
        pontuacao = 0;
    }
    return pontuacao;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int pontuacao = 0; // Variável para rastrear a pontuação do usuário

    printf("Bem-vindo(a) ao Quiz da série The Bear!\n\n");
    // Questão 1
    pontuacao += questao1(); // pontuacao = pontuacao + ponto;
    // Questão 2
    pontuacao += questao2();
    // Questão 3
    pontuacao += questao3();
    // Questão 4
    pontuacao += questao4();
    // Questão 5
    pontuacao += questao5();
    // Questão 6
    pontuacao += questao6();

    printf("\n\nPontuação final: %d de 6 perguntas corretas.\n", pontuacao);
}
