#pragma once
#include <iostream>
using namespace std;
class Node {
	int data;
	Node* next;
public:
	Node() {
		data = 0;
		next = nullptr;
	}
	Node(int data) {
		this->data = data;
		next = nullptr;
	}
	void setNext(Node* nextNode) {
		next = nextNode;
	}
	Node* getNext() {
		return next;

	}
	void setData(int dataValue) {
		data = dataValue;

	}
	int getData() {
		return data;
	}
};
class Stack {
	Node* top;
	int count;
public:
	Stack() {
		top = nullptr;
		count = 0;
	}
	bool isEmpty() {
		return top == nullptr;
	}
	void push(int data) {
		Node* temp = new Node(data);
		temp->setNext(top);
		top = temp;
		count++;
	}
	void pop() {
		if (isEmpty()) {
			cout << "stackk empty" << endl;
		}
		else {
			Node* temp = top;
			top = top->getNext();
			delete temp;
			count--;
		}
	}
	int peek() {
		if (isEmpty()) {
			return -1; 
		}
		return top->getData();
	}

	int size() {
		return count;
	}

	void clear() {
		while (!isEmpty()) {
			pop();
		}
	}
};

class Queue {
    Node* top;  
    int count;  

public:
    
    Queue(){ 
		top = nullptr;
			count = 0;
	
	
	}

    
    ~Queue() {
        clear();
    }

    
    bool isEmpty()  {
        return count == 0;
    }

   
    void enqueue(int data) {
        Node* newNode = new Node();
        newNode->setData(data);
        newNode->setNext(nullptr);

        if (isEmpty()) {
            top = newNode;
        }
        else {
            Node* temp = top;
            while (temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            temp->setNext(newNode);
        }
        count++;
    }

    void dequeue() {
        if (!isEmpty()) {
            Node* temp = top;
            top = top->getNext();
            delete temp;
            count--;
        }
        else {
            cout << "Queue is empty! Cannot dequeue." << endl;
        }
    }

   
    int size() const {
        return count;
    }

    
    void printQueue() const {
        Node* current = top;
        while (current != nullptr) {
            cout << current->getData() << " ";
            current = current->getNext();
        }
        cout << endl;
    }

    
    void clear() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

