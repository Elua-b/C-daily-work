#include <iostream>
#include<string.h>
using namespace std;
int main(){
	int num;
 cout<<"Enter a number : "<<endl;
 cin>>num;
 int sum=0;
 int zero=0;
 while(num>0){
 	int modulus=num%10;
 	if(modulus==0){
 		zero++;
	 }
 	
 	sum+=modulus;
 	num=num/10;
 	
 }
  cout<<sum<<endl;
  cout<<zero;
 
}
