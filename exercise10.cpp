#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[80],i,len;
	cout<<"Enter a string : ";
	cin>>str;
	len=strlen(str);
	cout<<"The reversed word is:";
	for(i=len;i>=0;i--){
		
		cout<<str[i];
		
	}
}
