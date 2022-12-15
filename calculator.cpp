#include<iostream>
using namespace std;
int sum( int num1, int num2){
	cout<<"the sum is: "<<num1+num2;
}
int subtract(int num1, int num2){
	cout<<"the difference is: "<<num1-num2;
}
int multiply (int num1,int num2){
	cout<<"the product is: "<<num1*num2;
}
int divide(int num1,int num2){
	cout<<"the quotient is: "<<num1/num2;
}
int getModulus(int num1,int num2){
	cout<<"the quotient is: "<<num1%num2;
}

int main (){
	int oper;
	int nums=2;
	int num1;
	int num2;
	cout<<"WELCOME TO OUR CALCULATOR"<<endl;
	cout<<endl;
	cout<<"Operations:"<<endl;
	cout<<"1. Addition "<<endl;
	cout<<"2. Subtraction "<<endl;
	cout<<"3. Multiplication "<<endl;
	cout<<"4. Division "<<endl;
	cout<<"5. Modulus "<<endl;
	cout<<"choose an operation: ";
	cin>>oper;
	if(oper < 0 || oper >5){
		cout<<"you have to choose in operations Please!"<<endl;
		cout<<"choose an operation: ";
		cin>>oper;
		
	}
	else{
		if(oper==1){
			
				cout<<"Enter number1: "<<endl;
				cin>>num1;
				cout<<"Enter number2: "<<endl;
				cin>>num2;
				
				sum(num1,num2);
				
				
			}
				if(oper==2){
			
				cout<<"Enter number1: "<<endl;
				cin>>num1;
				cout<<"Enter number2: "<<endl;
				cin>>num2;
				
				subtract(num1,num2);
				
				
			}
				if(oper==3){
			
				cout<<"Enter number1: "<<endl;
				cin>>num1;
				cout<<"Enter number2: "<<endl;
				cin>>num2;
				
				multiply(num1,num2);
				
				
			}
				if(oper==4){
			
				cout<<"Enter number1: "<<endl;
				cin>>num1;
				cout<<"Enter number2: "<<endl;
				cin>>num2;
				
				divide(num1,num2);
				
				
			}
				if(oper==5){
			
				cout<<"Enter number1: "<<endl;
				cin>>num1;
				cout<<"Enter number2: "<<endl;
				cin>>num2;
				
				getModulus(num1,num2);
				
				
			}
		
		}
	
	
}
