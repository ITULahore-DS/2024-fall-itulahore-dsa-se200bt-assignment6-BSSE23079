//
// Created by DELL on 9/30/2024.
//
#include "functions.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Stack Testing:" << endl;
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Stack after pushing 1, 2, 3: ";
    stack.printStack();
    cout << "Top element: " << stack.peek() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Stack after popping: ";
    stack.printStack();
    if (stack.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "stack is not empty and has " << stack.size() << " elements." << endl;
    }
    cout << "Stack size: " << stack.size() << endl;
    stack.clear();
    cout << "Stack after clearing: ";
    stack.printStack();
    if (stack.isEmpty()) {
        cout << "The stack is empty." << endl;
    } else {
        cout << "The stack is not empty and has " << stack.size() << " elements." << endl;
    }
    cout << endl;
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << endl;

    // Queue Testing
    cout << "Queue Testing:" << endl;
    Queue queue;
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);
    cout << "Queue after enqueuing 4,5,6: ";
    queue.printQueue();
    cout << "Dequeued element: " << queue.dequeue() << endl;
    cout << "Queue after dequeuing: ";
    queue.printQueue();
    if (stack.isEmpty()) {
        cout << "Que is empty." << endl;
    } else {
        cout << "Que is not empty and has " << queue.size() << " elements." << endl;
    }
    cout << "Queue size: " << queue.size() << endl;
    queue.clear();
    cout << "Queue after clearing: ";
    queue.printQueue();
    if (stack.isEmpty()) {
        cout << "que is currently empty." << endl;
    } else {
        cout << "que is not empty and has " << queue.size() << " elements." << endl;
    }


    return 0;
}
