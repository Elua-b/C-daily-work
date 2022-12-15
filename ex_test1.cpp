#include <iostream>
using namespace std;
int print(char a[],int num){
	
	if (a[num] != '\0'){
		cout<<a[num]<<endl;
		return print(a,num+1);
	}
	
	return 0;
}
int main(){
	char a[]={'a','b','c'};
	print(a,0);
	
	return 0;
}
