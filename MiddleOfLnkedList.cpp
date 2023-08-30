// if no of elements is even then right of middle is the mid
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int getLength(Node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

Node* findMiddle(Node* head) {
    if (head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, int d) {
    Node* newNode = new Node(d);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 15);
    insertAtHead(head, 12);
    insertAtTail(head, 10);
    insertAtTail(head, 14);
    insertAtTail(head, 13);
    insertAtTail(head, 16);

    cout << "Linked List: ";
    print(head);

    Node* middle = findMiddle(head);
    if (middle != NULL) {
        cout << "Middle element: " << middle->data << endl;
    } else {
        cout << "List is empty." << endl;
    }

    return 0;
}
