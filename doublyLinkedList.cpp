// Node me 3 cheeze hoti hai
// data, next aur previous

#include<iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this-> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory freed for node with data "<< val<< endl;
    }
};

void print(Node* head) {
    Node* temp = head;

    while (temp!=NULL) {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength (Node* &head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int d) {
    
    // if starting from zero nodes
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail (Node* &head, Node* &tail, int d) {

    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    
    else {
        // create a new node
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
    // insert at start
    if(position == 1) {
        insertAtHead(head, tail, d);
        return ;
    }    

    Node* temp = head;
    int cnt = 1;

    while (cnt< position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp->next == NULL) {
        insertAtTail(head, tail, d);
        return ;
    }

    //the above code is same as that of singly linked list
    // Only the code below this is modified
    // step 1 - create node
    // step 2 -  nodeToInsert->next = temp->next
    // step 3 - temp->next->prev = nodeToInsert
    // step 4 - temp->next = nodeToInsert
    // step 5 - nodeToInsert->prev = temp

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head) {
    // deleting the first node
    if(position == 1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        // memory free karva do - manually karna padega kyuki humne allocation heap me kiya gaya tha - ye karne ke liye humne iske upar ki dusri line likhi hai
        // class me destructor bhi likhna padega 
        delete temp; 
    }

    //deleting any other node
    else {
        // deleting any node in the middle or the last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main() {
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    // agar hum ekdam scratch se start karna chahte hai jahapar humare paas ek bhi node nahi hai
    Node* head = NULL;
    Node* tail = NULL;
    // jo changes yaha par kiye hai vohi singly list me bhi kijiye

    print(head);
    cout<< getLength(head) <<endl;

    insertAtHead(head, tail, 11);
    print(head);

    insertAtHead(head, tail, 12);
    print(head);

    insertAtHead(head, tail, 13);
    print(head);

    insertAtTail(head, tail, 9);
    print(head);

    insertAtTail(head, tail, 8);
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);

    insertAtPosition(head, tail, 1, 100);
    print(head);

    insertAtPosition(head, tail, 8, 100);
    print(head);

    deleteNode(1, head);
    print(head);

    deleteNode(4, head);
    print(head);

    deleteNode(6, head);
    print(head);

    return 0;
}