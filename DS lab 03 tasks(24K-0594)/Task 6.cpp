#include <iostream>
#include<string>
using namespace std;


struct Node{

    int data;
    Node* next;
    Node* child;

    Node(int val){      //self note: leave space for the implementation of the child pointer
        data = val;
        next = nullptr;
        child = nullptr;
    }
};


Node* flatten(Node* head){

    if (!head) return nullptr;

    Node* curr = head;
    while(curr){
        if (curr->child){
            
            Node* nextNode = curr->next;

            
            curr->next = curr->child;

            
            Node* tail = curr->child;

            while (tail->next){
                
                tail = tail->next;
            }

            
            tail->next = nextNode;
            curr->child = nullptr;
        }
        curr = curr->next;
    }
    return head;
}
//question says to give the function only