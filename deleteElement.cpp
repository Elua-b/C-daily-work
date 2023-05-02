#include<iostream>
#include <cstdlib>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next= NULL;
    };
};
int search(Node *head, int d){
    int i=1;
    while(head != NULL){
        if(head->data==d){
            return i;
        }
        head=head->next;
        i++;
    }
}
void display(Node *head){
while(head !=NULL){
    cout<<head->data<<"->";
    head= head->next;
}
}
Node *deleteFirstNode(Node *head){
    if (head == NULL)
        return NULL;
    Node *temp=head;
    head=head->next;
    free(temp);
    return head;
    cout<<head->next->data;
    cout<<head->next->next->data;
    cout<<head->next->next->next->data;
     cout<<head->next->next->next->next->next->data;
}
Node *deleteLastNode(Node * head){
    if (head==NULL)
        return NULL;
    if (head->next == NULL){
        delete head;
        return NULL;
    }
 //finding the second last node
    Node *second_last=head;
    while(second_last->next->next !=NULL)
        second_last->next = NULL;
    return head;
};
Node *deleteNode(Node *head, int i){
if(i<0){
    return head;
}
if(i==0 &&head){
    Node *newHead = head->next;
    head->next=NULL;
    delete head;
    return newHead;
}
Node *curr= head;
int count =1;
while(count<=1 && curr!=NULL){
    curr = curr->next;
    count++;
}
if(curr &&curr->next){
    Node *temp = curr->next;
    curr->next=curr->next->next;
    temp->next = NULL;
    delete temp;
    return head;
}
return head;
}
int main(){
    Node *n1=new Node(5);
    Node *n2=new Node(7);
    Node *n3=new Node(9);
    Node *n4=new Node(15);
    Node *n5=new Node(17);
//    Node *n5=new Node(20);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n1=deleteFirstNode(n1);
    display(n1);
    //int result = search(n1,9);
     // cout<<"the result is at position "<<result;
    return 0;
}
