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

Node* createCircularList(int N){

    Node* head = new Node(1); // self note: check the error it is giving under null conditions
    Node* prev = head;
    for (int i = 2; i <= N; i++){

        Node* newNode = new Node(i);
        prev->next = newNode;
        prev = newNode;
    }


    prev->next = head;

    return head;
}


int josephus(int N, int k){


    Node* head = createCircularList(N);
    Node* prev = NULL;
    Node* curr = head;

    while(curr->next!= curr){ 
        for (int count = 1; count < K; count++){

            prev = curr;
            curr = curr->next;
        }


        cout << "Eliminted:" << curr->data <<endl;
        prev->next = curr->next;
        Node* temp = curr;
        curr = curr->next;

        delete temp;
    }

    int survivor = curr->data;





    
    return survivor;
}




int main(){
    int N = 7, K = 3;
    cout << "N = " << N << ", K = " << K << endl;
    int survivor = josephus(N, K);
    cout << "Survivor's position is: " << survivor << endl;







    return 0;
}