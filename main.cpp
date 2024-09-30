#include <iostream>
#include "functions.h"  

using namespace std;

void stackMenu(Stack& myStack) {
    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Size\n";
        cout << "5. Clear Stack\n";
        cout << "6. Exit Stack Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            myStack.push(value);
            cout << "Pushed " << value << " onto the stack.\n";
            break;
        case 2:
            myStack.pop();
            cout << "Popped top element from the stack.\n";
            break;
        case 3:
            value = myStack.peek();
            if (value == -1) {
                cout << "Stack is empty!\n";
            }
            else {
                cout << "Top element is: " << value << endl;
            }
            break;
        case 4:
            cout << "Stack size: " << myStack.size() << endl;
            break;
        case 5:
            myStack.clear();
            cout << "Cleared the stack.\n";
            break;
        case 6:
            return;  
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

void queueMenu(Queue& myQueue) {
    int choice, value;

    while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Print Queue\n";
        cout << "4. Size\n";
        cout << "5. Clear Queue\n";
        cout << "6. Exit Queue Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            myQueue.enqueue(value);
            cout << "Enqueued " << value << " into the queue.\n";
            break;
        case 2:
            myQueue.dequeue();
            cout << "Dequeued front element from the queue.\n";
            break;
        case 3:
            cout << "Queue elements: ";
            myQueue.printQueue();
            break;
        case 4:
            cout << "Queue size: " << myQueue.size() << endl;
            break;
        case 5:
            myQueue.clear();
            cout << "Cleared the queue.\n";
            break;
        case 6:
            return; 
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

int main() {
    Stack myStack;
    Queue myQueue;
    int choice;

    while (true) {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Stack Operations\n";
        cout << "2. Queue Operations\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            stackMenu(myStack);
            break;
        case 2:
            queueMenu(myQueue);
            break;
        case 3:
            cout << "Exiting the program. Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}
