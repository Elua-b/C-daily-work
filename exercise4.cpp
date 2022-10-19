#include <iostream>
using namespace std;
int main(){
	int i=0;
	int length=0;
	char str[30];
	cout<<"Enter the string: ";
	cin>>str;
	while(str[i]!='\0'){
		length++;
		i++;
	
	}
	cout<<"The number of characters are "<<length;
	
}
