//#include<iostream>
//using namespace std;
//int main(){
// int scores[10];
// int i,j;
// for (i=0;i<10;i++){
// 	cout <<"Enter value of scores["<<i<<"]"<<endl;
// 	cin>>scores[i];
// }
// int sum=0;
// for(j=0;j<10;j++){
// 	cout<<"scores["<<j<<"]="<<scores[j]<<endl;
// 	sum+=scores[j];
// 	
// }
// cout<<sum;
// return 0;
//}

#include <iostream>
using namespace std;



int main(){
	
	int myArr[100],count,first,second;
	
	cout<<"Enter the length of array : "<<endl;
	cin>>count;
	
	for(int i=0;i<count;i++){
		cout<<"Enter a number : "<<endl;
		cin>>myArr[i];
	}
	
	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(myArr[i]>myArr[j]){
				int temp=myArr[i];
				myArr[i]=myArr[j];
				myArr[j]=temp;
			}
		}
	}
	
	first=myArr[count-1];
	second=myArr[count-2];
	
	cout<<"The first  largest number : "<<first<<endl;
	cout<<"the second largest number  : "<<second<<endl;
	
	return 0;
}
