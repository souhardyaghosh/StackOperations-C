#ifndef STACK_FUNC_H
#define STACK_FUNC_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Stack {
    int items[MAX];  
    float fItems[MAX];
    char cItems[MAX];
    int topI;
    int topF;
    int topC;
} Stack;

Stack stack;

void initStack(int max) {
    stack.topI = -1;  
    stack.topF = -1;  
    stack.topC = -1;  
}

int isFullI() {
    return stack.topI == MAX - 1;
}

int isFullF() {
    return stack.topF == MAX - 1;
}

int isFullC() {
    return stack.topC == MAX - 1;
}

int isEmptyI() {
    return stack.topI == -1;
}

int isEmptyF() {
    return stack.topF == -1;
}

int isEmptyC() {
    return stack.topC == -1;
}

void pushI(int value) {
    if (isFullI()) {
        printf("Stack overflow: Cannot push %d, int stack is full\n", value);
        return;  
    }
    stack.items[++stack.topI] = value;  
}

void pushF(float value) {
    if (isFullF()) {
        printf("Stack overflow: Cannot push %.2f, float stack is full\n", value);
        return;  
    }
    stack.fItems[++stack.topF] = value;  
}

void pushC(char value) {
    if (isFullC()) {
        printf("Stack overflow: Cannot push '%c', char stack is full\n", value);
        return;  
    }
    stack.cItems[++stack.topC] = value;  
}

int popI() {
    if (isEmptyI()) {
        printf("Stack underflow: Cannot pop, int stack is empty\n");
        return -1;  
    }
    return stack.items[stack.topI--];  
}

float popF() {
    if (isEmptyF()) {
        printf("Stack underflow: Cannot pop, float stack is empty\n");
        return -1.0f;  
    }
    return stack.fItems[stack.topF--];  
}

char popC() {
    if (isEmptyC()) {
        printf("Stack underflow: Cannot pop, char stack is empty\n");
        return '\0';  
    }
    return stack.cItems[stack.topC--];  
}

void printStackI() {
    if (isEmptyI()) {
        printf("Int stack is empty\n");
        return;
    }
    for (int i = 0; i <= stack.topI; i++) {
        printf("%d ", stack.items[i]);
    }
    printf("\n");
}

void printStackF() {
    if (isEmptyF()) {
        printf("Float stack is empty\n");
        return;
    }
    for (int i = 0; i <= stack.topF; i++) {
        printf("%.2f ", stack.fItems[i]);
    }
    printf("\n");
}

void printStackC() {
    if (isEmptyC()) {
        printf("Char stack is empty\n");
        return;
    }
    for (int i = 0; i <= stack.topC; i++) {
        printf("'%c' ", stack.cItems[i]);
    }
    printf("\n");
}

void clearStack() {
    stack.topI = -1;  
    stack.topF = -1;  
    stack.topC = -1;  
    printf("All stacks cleared\n");
}

#endif 
//BY SOUHARDYA GHOSH
//MADE FOR MAKING CODING EASY IN C
