#include <iostream>
using namespace std;
int main(){
	int i,j,temp;
	int nums[4]={12,55,5,18};
	for (i=0;i<4;i++){
		cout<<"i="<<i<<endl;
		for (j=i+1;j<4;j++){
			if(nums[i]>nums[j+1]){
				temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
			cout<<endl;
			cout<<"j="<<j<<endl;
			for(int p=0;p<4;p++){
				cout<<num[p]<<"\t";
			}
		}
	}
for (i=0;i<4;i++){
	cout<<nums[i]<<endl;
}
}
