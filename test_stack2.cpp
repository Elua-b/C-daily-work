#include<iostream>
using namespace std;
  class  Node{
	
		int data;
		
		Node *next;
	public:
		Node(int d){
			this->data=d;
			next=NULL;
		};
 class Stack{
 	Node *head;
 	int size;
 	public:
 		stack(){
 			
 			head=NULL;
 			size=0;
		 }
 };
};
bool isEmpty(){
return head==NULL;
}
void push(int ele){
	Node *ne=new Node(ele);
	ne->next=head;
	head=ne;
	size++;
}
int top(){
	if(isEmpty())
	 return 0;
	
	return head->data;
}

void pop(){
	if (isEmpty())
	 return;
	Node *temp=head;
	head=head->next;
	temp->next=NULL;
	delete temp;
	size--;
}
int size(){
	return size;
}
int main(){
	
	Stack si;
	Stack *head=NULL;
	si.push(10);
	si.push(20);
	si.push(30);
	si.push(40);
	si.pop();
	si.pop();
	cout<<"the element at top "<<si.top()<<endl;
	cout<<"the size of an array is"<<si.size()<<endl;
	return 0;
	
}
