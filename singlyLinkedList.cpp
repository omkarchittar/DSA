// linked list ka pointer Node type ka hota hai
// singly linked list
// Insertion 
// Insert at Head
// Insert at tail
// insert in the middle
// delete first
// delete last
// delete from the middle

#include<iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;

    // creating a custom contructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout<< "memory freed for node with data "<< value << endl;
    }
};

void InsertAtHead(Node* &head, int d) {

    // creating a new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d) {

    // creating a new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void InsertAtposition(Node* &head, Node* &tail, int position, int d) {
    // agar nth node pe kuch dalna hai toh (n-1) waali node tak traverse karna hai
    // nodeToInsert->next = temp->next
    // temp->next = NodeToInsert

    // neeche diye gaye reason ka solution
    if(position == 1) {
        InsertAtHead(head, d);
        return ;
    }

    // hum first position pe nahi daal paa rahe kyuki humne starting ki postion 1 choose ki hai 
    Node* temp = head;
    int cnt = 1;

    while(cnt< position-1) {
        temp = temp->next;
        cnt++;
    }

    // agar hum last position par koi node daal rahe hai toh uss case me hum InsertAtTail call toh kar sakte hai par usme tail update nahi ho raha
    // hume number of elements ka pata nahi islie hum loop bhi nahi laga sakte, par hum NULL ka use kar sakte hai
    // isilie hum check karnge ki jab hum koi naya node insert kar rahe hai aur uske temp->next me null hai, jiska matlab hum last position par hai
    // Inserting at last postion
    while(temp->next == NULL) {
        InsertAtTail(tail, d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<< temp -> data << " ";
        temp = temp->next;  // aage waali location
    }
    cout<<endl;
}

// delete hum position ke hisaab se kar sakte hai 
void deleteNode(int position, Node* &head) {
    // deleting the first node
    if(position == 1) {
        Node* temp = head;
        head = head->next;
        // memory free karva do - manually karna padega kyuki humne allocation heap me kiya gaya tha - ye karne ke liye humne iske upar ki dusri line likhi hai
        // class me destructor bhi likhna padega 
        temp->next = NULL; // taaki humare node ko bas prev waaala node point kare
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

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// delete hum value ke hisaab se bhi kar sakte hai 
void deleteValue(int value, Node* &head) {

}
 
int main() {

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);

    // cout<< node1->data <<endl;
    // cout<< node1->next <<endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 15);
    print(head);

    InsertAtTail(tail, 14);
    print(head);

    InsertAtTail(tail, 13);
    print(head);

    InsertAtposition(head, tail, 3, 202);
    print(head);

    InsertAtposition(head, tail, 1, 1);
    print(head);

    // head aur tail verify karne ke liye
    cout<< "head " <<head->data<<endl;
    cout<< "tail " <<tail->data<<endl;

    deleteNode(7, head);
    print(head);

    // agar last node hum delete karde phir bhi tail aapka delete kiye hue node ko point kar raha hota hai
    // toh tail ka pointer change karneke liye code likhna is a homework
    cout<< "head " <<head->data<<endl;
    cout<< "tail " <<tail->data<<endl;

    return 0;
}



// #include<iostream>
// #include<list>
// using namespace std;

// class Node {

//     public:
//     int data;
//     Node* next;

//     // constructor
//     Node(int data) {
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// void InsertAtHead(Node* &head, int d) { // ref liya kyuki copy nahi banani/ original ll me hi changes hone chahiye

//     // new node create
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;

// }

// void InsertAtTail(Node* &tail, int d) {
//     // new node create
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = tail -> next;
// }

// void InsertAtPosition(Node* &tail, Node* &head, int position, int d) {
//     // insert at start
//     if(position == 1) {
//         InsertAtHead(head, d);
//         return ;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < position-1) {
//         temp = temp-> next;
//         cnt++;
//     }

//     // insert at last
//     if(temp->next == NULL) {
//         InsertAtTail(tail, d);
//         return ;
//     }

//     //creating a node for d
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert -> next = temp->next;
//     temp->next = nodeToInsert;
// }

// // ll traversal
// void print(Node* &head) {
//     Node* temp = head;

//     while(temp != NULL) {
//         cout<< temp -> data <<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }

// int main() {

//     // created a new node
//     Node* node1 = new Node(10);
//     cout<<node1-> data<<endl;
//     cout<<node1-> next<<endl;

//     // head pointed to node1
//     Node* head = node1;
//     Node* tail = node1;
//     print(head);

//     InsertAtTail(tail, 12);
//     print(head);

//     InsertAtPosition(tail, head, 1, 14);
//     print(head);

//     InsertAtPosition(tail, head, 1, 18);
//     print(head);

//     InsertAtHead(head, 15);
//     print(head);

//     InsertAtPosition(tail, head, 6, 21);
//     print(head);

//     return 0;
// }