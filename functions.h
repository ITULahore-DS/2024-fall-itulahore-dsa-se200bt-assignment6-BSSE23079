#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;

public:
    Node(int d);
    ~Node();
    void setNext(Node* nextNode);
    Node* getNext();
    void setData(int dataValue);
    int getData();
};

class Stack {
    private:
    Node* top;
    int count;

    public:
    Stack();
    ~Stack();
    void push(int data);
    int pop();
    bool isEmpty();
    int peek();
    int size();
    void clear();
    void printStack();
};

class Queue {
    private:
    Node* top;
    int count;
    public:
    Queue();
    ~Queue();
    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    int size();
    void printQueue();
    void clear();


};











#endif //FUNCTIONS_H
