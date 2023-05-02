#include<iostream>
using namespace std;
struct Node{
	string name;
	string email;
	int age;
	Node* next;
	
	
}; 
void display(Node* head){
	if(head==NULL){
		cout<<"the linked list is empty";
		return;
	}
	Node* current=head;
	while(current){
		cout<<"Name:"<<current->name<<endl;
		cout<<"Email"<<current->email<<endl;
		cout<<"Age"<<current->age<<endl;
		cout<<endl;
		current=current->next;
		
	}
	
}
int main(){
	Node* newUser = new Node;
	Node * head=NULL;
	for(int i=0;i<3;i++){
		cout<<"Enter the name of "<<i+1<<"user"<<endl;
		cin>>newUser->name;
			
		cout<<"Enter the email of "<<i+1<<"user"<<endl;
		cin>>newUser->email;
			
		cout<<"Enter the age of "<<i+1<<"user"<<endl;
		cin>>newUser->age;
		newUser->next=head;
		newUser=head;
		
	}
	display(head);
	return 0;
	
}
