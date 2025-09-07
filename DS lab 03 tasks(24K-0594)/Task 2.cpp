#include<iostream>
#include<string>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* mergeSortedLists(Node* list1, Node* list2){

    if (!list1){return list2;}
    if (!list2){return list1;}

    


    Node* head = nullptr;
    if (list1->data <= list2->data){
        
        head = list1;
        list1 = list1->next;
    } 
    else{
        head = list2;
        list2 = list2->next;
    }

    Node* tail = head;
    while (list1 && list2){
        if (list1->data <= list2->data){
            tail->next = list1;
            list1 = list1->next;
        }
        else{
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    
    if (list1){
        tail->next = list1;
    }
    if (list2){
        tail->next = list2;
    }

    return head;
}


void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << "\n";
}

int main(){
    
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);
    Node* merged = mergeSortedLists(list1, list2); // self note : this line is giving and error why?

    cout << "Merged List: ";
    printList(merged);

    return 0;
}
