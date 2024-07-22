#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

void insertAtHead(int value, Node*& head, Node*& tail) {
    // When head and tail both pointing to NULL, the list is empty
    if (head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    } else {
        // The list is not empty
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value, Node*& head, Node*& tail) {
    // When head and tail both pointing to NULL, the list is empty
    if (head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    } else {
        // The list is not empty
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}

}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);

    print(head);

    return 0;
}
