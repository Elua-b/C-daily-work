#include <iostream>
using namespace std;
int addNumber(int first_param,int second_param){
	int result =first_param+second_param;
	return result;
}
int main (){
	int first_number {3};
	int second_number {7};
	cout << "First number:"  <<second_number;
	int sum = first_number + second_number;
	cout << "\n";
	cout <<"the sum is " <<sum <<"\n";
	int addition =addNumber(23,34);
	cout <<"the output is "<<addition ;
	return 0;
}
