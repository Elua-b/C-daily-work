#include <iostream>
using namespace std;
int main(){
	int i,j,temp;
	int nums[4]={12,55,5,18};
	for (i=0;i<4;i++){
		for (j=i+1;j<4;j++){
			if(nums[i]>nums[j]){
				temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
			cout<<"j="<<j<<endl;
			for (int k=0;k<4;k++){
				cout<<nums[k]<<"\t";
			}
		}
	}

}
}
