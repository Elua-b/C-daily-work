#include<iostream>
using namespace std;
void repeated_element(int nums[],int size){
	int max_count=0;
	for(int i=0;i<size;i++){
		int count=1;
		for (int j=i+1;j<size;j++)
		{
			
			if(nums[i]==nums[j]){
				count++;
			}
			if (count>max_count){
				max_count=count;
			}
		}
	}
		for(int i=0;i<size;i++){
		int count=1;
		for ( int j=i+1;j<size;j++)
		{
			
			if(nums[i]==nums[j]){
				count++;
			}
			if (count==max_count){
			cout<<nums[i]<<endl;
			}
		}
	}
}
int main(){
	int nums[]={2,3,4,5,6,2,3,4,4,5};
	int size=sizeof(nums)/sizeof nums[0];
	repeated_element(nums,size);
	

}
