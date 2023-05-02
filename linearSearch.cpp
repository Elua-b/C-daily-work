#include<iostream>
using namespace std;
int search(int arr[],int n,int val){
	for(int i=0;i<n;i++){
		if(arr[i]==val){
			return i;
		}
	    if(i=n){	
		return -1;
	    }
	}
}
int main(){
	int arr[5]={11,12,35,67,78};
	int val=11;
	int pos= search(arr,5,val);
	if(pos==-1){
		cout<<"The key was not found";
	}
	else{
		cout<<"the key  found";
	}
	
}
