#include <iostream>
#define SIZE 5
using namespace std;
int A[SIZE];
int top=0;
bool is_Empty(){
	if (top==0){
	
		return true;
	}else{
		return false;
	}
}
void push(int value){
	if(top==SIZE-1){
		cout<<"The stack is full"<<endl;
		
	}
	else{
		top++;
		A[top]=value;
	}
}
void pop(	){
	 if(is_Empty()){
	 cout<<"the stack is empty"<<endl;
	 
	 }else{
	 	
	 	top--;
	 	
	 }
	 	
	 
}
void show_top(){
	 if(is_Empty()){
	 cout<<"the stack is empty"<<endl;
	 
	}else{
		cout<<"Element at the top is "<<A[top]<<endl;
	}

}
void display(){
	if(is_Empty()){
	
		cout<<"The stack is empty"<<endl;
	}
	else{
		for (int i=0;i<=top;i++){
			cout<<A[i]<<" ";
		}
	}
}
int main (){
	push(2);
	push(4);
	push(5);
	push(6);
	push(7);
	
	
	display();
	pop();
	show_top();
	return 0;
	
}

