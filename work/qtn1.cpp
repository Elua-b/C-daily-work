#include<iostream>
using namespace std;
int length(char arr[],int ln){
	
	if(arr[ln] =='\0'){
		return ln;
	}
	else{
		return length(arr,ln+1);
	}
	
}

int main(){
	char arr[]={'e'};
 cout<<length(arr,0);
	return 0;
}
