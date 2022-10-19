#include<iostream>
using namespace std;
int main (){
	int n;
	int x;
	int i=1;
	cout<<"Enter the number of positive numbers: ";
	cin>>n;
	if(n>0){
		cout<<"you are going to enter "<<n<<"numbers"<<endl;
		for( i;i<n;i++){
		cout <<"enter number " <<i <<":";
		cin>>x;
		if(x<=0){
			cout<<"re-enter the number";
		}
		
	}
	}

}
