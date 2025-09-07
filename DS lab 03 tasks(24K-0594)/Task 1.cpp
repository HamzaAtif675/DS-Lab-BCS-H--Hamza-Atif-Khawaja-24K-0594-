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

Node *reverse(Node *head){
    if(!head || !head->next){
        return head;
    }

    Node *newHead = reverse(head->next);

    return newHead;
}

bool checkPallindrome(Node *head){
    if(!head || !head->next){
        return true;
    }

    
    Node *fast = head;
    Node *slow = head;

    while(fast->next || fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* listHalf = reverse(slow->next);
    bool isPallindrome = true;
    Node *p1 = head;
    Node *p2 = listHalf;


    while(p2){
        if(p1->data != p2->data){
            return false;
        }
        p1 = p1->next;

        p2 = p2->next;
    }

    return isPallindrome;
}

void printList(Node* head){
    while(head){

        cout << head->data << " -> ";

        head = head->next;
    }

    cout << "NULL" << endl;
}

int main(){
    Node *head = NULL;

    insertInteger(head , 1);
    insertInteger(head , 2);
    insertInteger(head , 3);
    insertInteger(head , 2);
    insertInteger(head , 1);
    cout << endl;
    printList(head);
    cout << endl;
    if(checkPallindrome){
        cout << "This list is a pallindrome" << endl;

    }
    else{
        cout << "this is not a pallindrome" << endl;
    }

    return 0;
}