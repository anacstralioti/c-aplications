#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int question1(){
    int score = 0;
    printf("\nQuestion number 1: What is the full name of the protagonist of *The Bear*?\n\n");
    printf("a) Carmine Berzatto\n");
    printf("b) Carmen Berzatto\n");
    printf("c) Carmy Berzatto\n");
    printf("d) Carl Berzatto\n");
    printf("e) Carly Berzatto\n\n");
    char answer1;
    scanf(" %c", &answer1);
    if (answer1 == 'b') {
        printf("\nCorrect answer! Carmen Berzatto is the full name of the protagonist of *The Bear*.\n");
        score = 1;
    }
    else {
        printf("\nIncorrect answer! The correct answer is letter B.\n");
        score = 0;
    }
    return score;
}

int question2(){
    int score = 0;
    printf("\nQuestion number 2: What is the main financial challenge the protagonist faces when taking over the restaurant?\n\n");
    printf("a) Accumulated debts\n");
    printf("b) Lack of suppliers\n");
    printf("c) Renovations\n");
    printf("d) Paying the employees\n");
    printf("e) Rent increase\n\n");
    char answer2;
    scanf(" %c", &answer2);
    if (answer2 == 'a') {
        printf("\nCorrect answer! The main financial challenge was accumulated debts.\n");
        score = 1;
    }
    else {
        printf("\nIncorrect answer! The correct answer is letter A.\n");
        score = 0;
    }
    return score;
}

int question3(){
    int score = 0;
    printf("\nQuestion number 3: What was the protagonist’s profession before taking over the family restaurant?\n\n");
    printf("a) Chef at a fast food restaurant\n");
    printf("b) Café manager\n");
    printf("c) Chef at a fine dining restaurant\n");
    printf("d) Manager at a fine dining restaurant\n");
    printf("e) Manager at a fast food restaurant\n\n");
    char answer3;
    scanf(" %c", &answer3);
    if (answer3 == 'c') {
        printf("\nCorrect answer! The protagonist was a chef at a fine dining restaurant before taking over the family business.\n");
        score = 1;
    }
    else {
        printf("\nIncorrect answer! The correct answer is letter C.\n");
        score = 0;
    }
    return score;
}

int question4(){
    int score = 0;
    printf("\nQuestion number 4: What is the main reason the protagonist takes over the restaurant?\n\n");
    printf("a) His love for cooking\n");
    printf("b) His brother’s death\n");
    printf("c) The desire to open his own restaurant\n");
    printf("d) His mother’s death\n");
    printf("e) The birth of his son\n\n");
    char answer4;
    scanf(" %c", &answer4);
    if (answer4 == 'b') {
        printf("\nCorrect answer! The main reason the protagonist takes over the restaurant is his brother’s death.\n");
        score = 1;
    }
    else {
        printf("\nIncorrect answer! The correct answer is letter B.\n");
        score = 0;
    }
    return score;
}

int question5(){
    int score = 0;
    printf("\nQuestion number 5: What is the main theme addressed in the series *The Bear*?\n\n");
    printf("a) Family drama\n");
    printf("b) Pressure of the culinary industry\n");
    printf("c) Culinary travels around the world\n");
    printf("d) Family love\n");
    printf("e) Workplace romance\n\n");
    char answer5;
    scanf(" %c", &answer5);
    if (answer5 == 'b') {
        printf("\nCorrect answer! The main theme of the series is the pressure of the culinary industry.\n");
        score = 1;
    }
    else {
        printf("\nIncorrect answer! The correct answer is letter B.\n");
        score = 0;
    }
    return score;
}

int question6(){
    int score = 0;
    printf("\nQuestion number 6: What is the initial reaction of the restaurant staff to the protagonist's new leadership style?\n\n");
    printf("a) Reluctance and resistance\n");
    printf("b) Enthusiasm and support\n");
    printf("c) Indifference\n");
    printf("d) Acceptance\n");
    printf("e) Happiness\n\n");
    char answer6;
    scanf(" %c", &answer6);
    if (answer6 == 'a') {
        printf("\nCorrect answer! The staff’s initial reaction to the new leadership style is reluctance and resistance.\n");
        score = 1;
    }
    else {
        printf("\nIncorrect answer! The correct answer is letter A.\n");
        score = 0;
    }
    return score;
}

int main(){
    int score = 0;

    printf("Welcome to the *The Bear* series quiz!\n\n");
    // Question 1
    score += question1();
    // Question 2
    score += question2();
    // Question 3
    score += question3();
    // Question 4
    score += question4();
    // Question 5
    score += question5();
    // Question 6
    score += question6();

    printf("\n\nFinal score: %d out of 6 correct answers.\n", score);
}