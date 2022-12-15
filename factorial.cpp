#include <iostream>
using namespace std;
int factorial(int n){
	if(n<0){
		return -1;
	}
	if(n==0){
		return 1;
	}
	int smallFact=factorial(n-1);
	return smallFact;
}
int main(){
cout<<factorial(5);
return 0;
}
