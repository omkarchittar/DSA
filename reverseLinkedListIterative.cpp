// // reverse a linked list
// Static Data Members (Class Variables): When you declare a member variable of a class as static, 
// there will be only one instance of that variable shared across all instances of the class. 
// This means that all objects of the class share the same memory location for the static variable. 
// Static variables are initialized only once, and their values are retained throughout the program's execution. 
// They are often used for constants or for storing data that needs to be shared among all instances of the class.

// Static Member Functions (Class Methods): When you declare a member function of a class as static, 
// it belongs to the class itself, rather than to any specific instance of the class. As a result, 
// you can call a static member function using the class name, without needing an instance of the class. 
// Static member functions can only access static data members and other static member functions of the class; 
// they cannot access instance-specific (non-static) data members directly.

// time = O(n)
// space = O(1)
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

    Node* reverseLinkedList(Node* &head) {
        // empty list ya fir single node agar ho
        if(head==NULL || head->next==NULL) {
            return head;
        }
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
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