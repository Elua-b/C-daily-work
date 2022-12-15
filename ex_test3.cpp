#include <iostream>
using namespace std;
int reverse (char arr[],int num){
	if (num==0){
		exit(1) ;
	}
	if(num>0){
		cout<<arr[num-1];
		return reverse(arr,num-1);
	}
	return 0;
}
int main(){
	char arr[]={'a','b','c'};
	int num=3;
	cout<<reverse(arr,num);
	
}
