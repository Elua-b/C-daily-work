#include<iostream>
#include<string.h>
#include<string>
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
    Node *temp=head;
    head=head->next;
    free(temp);
    return head;
}
int main(){
    Node *n1=new Node(5);
    Node *n2=new Node(7);
    Node *n3=new Node(9);
    Node *n4=new Node(15);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n1=deleteFirstNode(n1);
    display(n1);
    int result = search(n1,9);
    //cout<<"the result is at position "<<result;
    return 0;
}
