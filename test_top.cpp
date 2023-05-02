#include<iostream>
using namespace std;
class Stack{
	private:
		int *arr;
		int nextIndex;
		int capacity;
	public:
	Stack();
	capacity=5	;
	arr =new int[capacity];
	nextIndex=0;
};
void push(int element ){
	if(nextIndex==capacity){
		cout<<"stack overflow";
		
	}
	arr[nextIndex]=element;
	nextIndex++;
}
int size(){
	return nextIndex;
	
}
bool isEmpty(){
	return nextIndex==0;
	
}
void pop(){
	if (isEmpty){
		cout<<"stack overflow";
		return
	}
	else{
		cout<<top()<<endl;
		nextIndex--;
	}
}
int Top(){
	return	arr[nextIndex-1];
}
int main (){
	Stack s;
	s.push('a');
	s.push('d');
	s.push(97);
	s.push(105);
	cout<<s.size()<<endl;
	
}
