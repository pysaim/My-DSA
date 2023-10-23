#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = NULL;
    }
    
    void insert_CLL(int n) {
        Node* newNode = new Node();
    newNode->data = n;

    if (head == NULL) {
        head = newNode;
        head->next = head; // Point to itself to make it a circular list
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode; // Update the head to the newly inserted node
    }
    }

    void insert_CLL_atspc(int pos,int n) {
        Node* newNode = new Node();
    newNode->data = n;

    if (head == NULL) {
        head = newNode;
        head->next = head; // Point to itself to make it a circular list
    } else {
        Node* temp = head;
        while (temp->data != pos) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    }

    void display() {
        Node* ptr = head;

        if (ptr == NULL) {
            cout << "CLL is empty" << endl;
        } else {
            do {
                cout << ptr->data << " -> ";
                ptr = ptr->next;
            } while (ptr != head);
            cout << head->data << endl;
        }
    }
};

int main() {
    CircularLinkedList n;
    char cho;
    int q;
    int size;
    int pos;
    
        cout << "Enter how many data do you want to insert: ";
        cin >> size;
      for (int i = 1; i <= size; i++) {
            cout << "Enter data " << i << ": ";
            cin >> q;
            n.insert_CLL(q);
        }
        n.display();



    do {
        cout << "Enter how many data do you want to insert any point ";
        cin >> size;
        
        
        for (int i = 1; i <= size; i++) {
            cout<<"Enter Position";
         cin>>pos;
            cout << "Enter data " << i << ": ";
            cin >> q;
            n.insert_CLL_atspc(pos,q);
        }
        cout << "Updated CLL: ";
        n.display();

        cout << "Do you want to insert one more node at the beginning (Y/N)? ";
        cin >> cho;
    } while (cho == 'Y' || cho == 'y');

    return 0;
}

