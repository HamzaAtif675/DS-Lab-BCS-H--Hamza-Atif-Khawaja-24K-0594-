#include<iostream>
#include<string>


using namespace std;


class Node1{//for singally
public:
    int data;
    SNode* next;
    Node1(int val){
        data = val;
        next = NULL;
    }
};


class Node2{ // for doublly
public:
    int data;
    DNode* next;
    DNode* prev;

    Node2(int val){
        data = val;
        next = prev = NULL;
    }
};

void insert1(Node1*& head, int val){

    Node1* newNode = new Node1(val);
    if (!head){

        head = newNode;
        return;
    }
    Node1* temp = head;

    while (temp->next) temp = temp->next;
    temp->next = newNode;


}



Node2* convertToDoubly(Node1* head){

    if (!head){
        return NULL;
    } 

    Node2* Head2 = new Node2(head->data);
    Node2* Curr2 = Head2;
    head = head->next;

    while(head){

        Node2* newNode = new Node2(head->data);

        Curr2->next = newNode;
        newNode->prev = Curr2;
        Curr2 = newNode;

        head = head->next;
    }







    return Head2;
}


Node1* convertToCircular(Node1* head){

    if (!head) return NULL;
    Node1* temp = head;
    while (temp->next){
        temp = temp->next;
    }

    temp->next = head;




    return head;
}




int main() {
    Node1* Head1 = NULL;

    
    for (int i = 1; i <= 4; i++) {
        insertSingly(Head1, i);
    }

    Node2* Head2 = convertToDoubly(Head1);
    Node1* Head3 = convertToCircular(Head1);

    return 0;


    //self note : remember to make print functions
}