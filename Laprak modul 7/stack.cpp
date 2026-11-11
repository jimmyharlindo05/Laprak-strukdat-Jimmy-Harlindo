#include <iostream>
#include <cctype>
#include "stack.h"

using namespace std;

void createStack(Stack &S) {
    S.top = -1;
}

void Push(Stack &S, infotype x) {
    if (S.top < 19) {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop(Stack &S) {
    if (S.top >= 0) {
        infotype x = S.info[S.top];
        S.top--;
        return x;
    }
    return -1;
}

void printInfo(Stack S) {
    cout << "[TOP] ";

    for (int i = S.top; i >= 0; i--) {
        cout << S.info[i] << " ";
    }

    cout << endl;
}

void balikStack(Stack &S) {
    int i = 0;
    int j = S.top;

    while (i < j) {
        infotype temp = S.info[i];
        S.info[i] = S.info[j];
        S.info[j] = temp;

        i++;
        j--;
    }
}

void pushAscending(Stack &S, infotype x) {
    if (S.top < 19) {
        int i = S.top;

        while (i >= 0 && S.info[i] > x) {
            S.info[i + 1] = S.info[i];
            i--;
        }

        S.info[i + 1] = x;
        S.top++;
    }
}

void getInputStream(Stack &S) {
    char input;

    while (cin.get(input) && input != '\n') {
        if (isdigit(static_cast<unsigned char>(input))) {
            Push(S, input - '0');
        }
    }
}