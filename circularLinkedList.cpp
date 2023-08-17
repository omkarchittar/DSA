// last node->next = head
// circular singly linked list
// circular doubly linked list

#include<iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        // memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout<<"memory freed for the node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d) {

    //empty list
    if(tail == NULL) {
        Node* naya = new Node(d);
        tail = naya;
        naya->next = naya;
    }
    else {
        // non empty list
        // assuming that the element is present in the list
        Node* curr = tail;

        while(curr->data != element) {
            curr = curr->next;
        }    

        // element found -> curr is representing element waala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// traversal
void print(Node* &tail) {
    Node* temp = tail;

    // empty list
    if(tail == NULL) {
        cout<<"List is empty "<<endl;
        return ;
    }
    // cout<<tail->data<<" ";
    // while(tail->next != temp) {
    //     cout<< tail->data<< " ";
    //     tail = tail->next;
    // }
    // cout<<" ";

    // can use do while loop instead
    // atleast ek baar toh bhi execute hoga - jab humaare pass ek hi node hai
    do {
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value) {
    // empty list
    if(tail == NULL) {
        cout<<"List is empty, please check again!"<<endl;
        return ;
    }
    else {
        // non-empty

        //assuming that "value" is present int the Linked List
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node linked list
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 node linked list
        else if(tail == curr) {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

int main() {
    Node* tail = NULL;

    //empty list me insert kar rahe hai
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 7, 9);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);

    // insertNode(tail, 9, 10);
    // print(tail);

    // insertNode(tail, 3, 4);
    // print(tail);

    deleteNode(tail, 3);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    return 0;
}