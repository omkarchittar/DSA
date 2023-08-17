#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    Node* reverse(Node* &head) {

        // base case
        if(head == NULL || head->next == NULL) {
            return head;
        }

        // ek case solve karo
        Node* chotaHead = reverse(head->next);

        head->next->next = head;
        head->next = NULL;

        return chotaHead;
    }

    Node* reverseLinkedList(Node* &head) {
        return reverse(head);
    }

    static void print(Node* &head) {
        Node* temp = head;

        while(temp != NULL) {
            cout<< temp -> data << " ";
            temp = temp->next;  // aage waali location
        }
        cout<<endl;
    }

    static void InsertAtHead(Node* &head, int d) {
        // creating a new node
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }

    static void InsertAtTail(Node* &tail, int d) {
        // creating a new node
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = tail -> next;
    }
};



int main() {

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    Node::InsertAtHead(head, 12);
    Node::InsertAtHead(head, 15);
    Node::InsertAtTail(tail, 14);
    Node::InsertAtTail(tail, 13);

    cout << "Original Linked List: ";
    Node::print(head);

    head = head->reverseLinkedList(head); // imp

    cout << "Reversed Linked List: ";
    Node::print(head);

    return 0;
}