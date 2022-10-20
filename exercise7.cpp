#include<iostream>
#include<string.h>
using namespace std;
int main (){  
 char str[80];
    int i=0, len, j=0,a,b=0,d=0,c;
    cout << "Enter a string : ";
    gets(str);
    len = strlen(str);
    for( i = 0; i < len; i++){
        if (str[i] == ' ') {
        	
            continue;
           
        }
        else{
        	j++;
		}
    }
    for( a = 0; a < len; a++){
        if (str[a] == ' ') {
            b++;
        }
    }
    for( c= 0; c < len; c++){
        
        	d++;
		
    }
    cout << "number of characters without spaces  are : " << j<<endl;
    cout << "number of characters with spaces  are : " << d<<endl;

	cout << "number of words are : " << b+1;
    return 0;
	
}
