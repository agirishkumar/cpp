#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
};

void PrintNode(Node* n){
    while(n!= NULL){
        cout << n->data;
        n = n->next;
    }
}

int Length(Node* n){
    int count = 0;
    while (n != NULL){
        n=n->next;
        count++;
    }
    return count;
}

int main(){
    
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    second->data = 2;
    third->data = 3;
    head->next = second;
    second->next = third;
    third->next = NULL;
    PrintNode(head);
    cout<<" no. of nodes " << Length(head);

    return 0;
}