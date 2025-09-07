#include<iostream>
#include<string>

using namespace std;

class Node{
    public:
    int val;
    Node *next;
}

void insertInteger(Node *&head , int integer){
    Node *newNode = new Node(integer);
    if(!head){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next){

        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* head){
    while(head){

        cout << head->data << " -> ";

        head = head->next;
    }

    cout << "NULL" << endl;
}

Node* reverse(Node* head, int k){


    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    int count = 0;
    Node* temp = head;
    while(temp && count < k){
        temp = temp->next;
        count++;
    }
    count = 0;


    while(curr && count < k){

        next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
        count++;

    }

   
    if(next){
        head->next = reverse(next, k);
    }

    return prev;
}

int main(){
    Node *head = NULL;
    int n = 3

    insertInteger(head , 1);
    insertInteger(head , 2);
    insertInteger(head , 3);
    insertInteger(head , 4);
    insertInteger(head , 5);
    insertInteger(head , 6);
    insertInteger(head , 7);
    cout << endl;

    printList(head);

    head = reverse(head , n);


    cout << endl;
    printList(head);

    return0;


}