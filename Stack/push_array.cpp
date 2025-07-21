#include<iostream>
using namespace std;

const int MAX = 100; // define max size of the stack
int top = -1; // global variable to keep track of top index

void push(int s[], int data) {
    if (top == MAX - 1) {
        cout << "Stack is Overflow" << endl;
    } else {
        top++;
        s[top] = data;
    }
}

void printStack(int s[]) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int stack[MAX];

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printStack(stack);

    return 0;
}
