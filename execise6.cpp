#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"Enter the string: ";
	cin>>str;
	for (int i=0;i<str.length();i++){
		str[i]=toupper(str[i]);
	}

	cout<<"the string in upper is "<<str;
}
