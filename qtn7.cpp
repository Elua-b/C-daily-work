#include<iostream>
using namespace std;
int main(){
	int sum=1;
	for (int i=1;i<20;i++){
		if(i%2!=0){
			sum*=i;
		}
	}
	cout<<sum;
}
