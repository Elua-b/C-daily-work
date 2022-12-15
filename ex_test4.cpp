#include<iostream>
#include<string.h>
using namespace std;
void removeX(char *input,char x) {
    if (input[0] == '\0')
        return;

    if (input[0] == x) {
        memmove(input, input + 1, strlen(input + 1) + 1);
        removeX(input,x);
         cout<<input;
    } else {
        removeX(input + 1,x);
       
    }
}
int main(){
	char input[]={'a','b','c','d','a','d','a'};
	char x='d';
	removeX(input,x);
	return 0;
}
