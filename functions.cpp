//
// Created by DELL on 9/30/2024.
//
#include "functions.h"

Node::Node(int d) {
    data = d;
    next = NULL;
}
Node::~Node() {

}
int Node::getData() {
    return data;
}
void Node::setNext(Node *nextNode) {
    next = nextNode;
}
Node *Node::getNext() {
    return next;
}

void Node::setData(int dataValue) {
    data = dataValue;
}

//Class Stack

Stack::Stack() {
    top = NULL;
    count = 0;
}
Stack::~Stack() {
    clear();
}
void Stack::push(int data) {
    Node* newNode = new Node(data);
    newNode->setNext(top);
    top = newNode;
    count++;
}
int Stack::pop() {
    if (isEmpty()) {
        cout << "EMPTY STACK" << endl;
        return -1;
    }
    Node* temp = top;
    int poppedData = top->getData();
    top = top->getNext();
    delete temp;
    count--;
    return poppedData;
}

bool Stack::isEmpty() {
    return top == nullptr;
}
int Stack::peek() {
    if (isEmpty()) {
        cout << "EMPTY STACK" << endl;
        return -1;
    }
    return top->getData();
}

int Stack::size() {
    return count;
}

void Stack::clear() {
    while (!isEmpty()) {
        pop();
    }
}

void Stack::printStack() {
    Node* temp = top;
    while (temp != nullptr) {
        cout << temp->getData() << "\t ";
        temp = temp->getNext();
    }
    cout << endl;
}
// Class Queue

// Queue Class Implementation
Queue::Queue() {
    top = NULL;
    count = 0;
}

Queue::~Queue() {
    clear();
}

void Queue::enqueue(int data) {
    Node* newNode = new Node(data);
    if (isEmpty()) {
        top = newNode;
    } else {
        Node* temp = top;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        temp->setNext(newNode);
    }
    count++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Empty Queue" << endl;
        return -1;
    }

    Node* temp = top;
    int dequeuedData = top->getData();
    top = top->getNext();
    delete temp;
    count--;
    return dequeuedData;
}

bool Queue::isEmpty() {
    return top == nullptr;
}

int Queue::size() {
    return count;
}

void Queue::clear() {
    while (!isEmpty()) {
        dequeue();
    }
}

void Queue::printQueue() {
    Node* temp = top;
    while (temp != nullptr) {
        cout << temp->getData() << "\t ";
        temp = temp->getNext();
    }
    cout << endl;
}












