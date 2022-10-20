#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char sent[80],j=0,i;
	int len;
	cout<<"Enter the sentence: ";
	cin>>sent;
	len = strlen(sent);
    for( i = 0; i < len; i++){
        if (sent[i] == ' ') {
            j++;
        }
    }
    cout << "number of spaces in a sentence are : " << j;
    return 0;
	
	
}
