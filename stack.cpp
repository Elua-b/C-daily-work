#include <iostream>

class Stack {
private:
    int* arr;
    int capacity;
    int top;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top == capacity - 1) {
            std::cout << "Stack Overflow: Cannot push element, stack is full." << std::endl;
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            std::cout << "Stack Underflow: Cannot pop element, stack is empty." << std::endl;
            return;
        }
        --top;
    }

    int peek() {
        if (top == -1) {
            std::cout << "Stack is empty." << std::endl;
            return -1; // or throw an exception
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top == -1);
    }

    int topElement() {
        if (top == -1) {
            std::cout << "Stack is empty." << std::endl;
            return -1; // or throw an exception
        }
        return arr[top];
    }
};

int main() {
    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);



    std::cout << "Top element: " << stack.topElement() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "Top element: " << stack.topElement() << std::endl;

    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    return 0;
}
