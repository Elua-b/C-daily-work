#include<iostream>
using namespace std;
int sum(int num1,int num2){
	int sum;
	sum= num1+num2;
	cout<<"The sum is :"<<sum<<endl;
	return 0;
}
int main(){
	int num1;
	int num2;
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	sum(num1,num2);
}
