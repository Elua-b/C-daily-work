#include <iostream>
using namespace std;
int summing(int a[],int num,int sum){
	
while(num){
	sum+=a[num-1];
	return summing(a,num-1,sum);
}

return sum;

}
int main(){
	int a[]={1,2,3};
	int num=3;
	int sum=0;

	cout<<summing(a,num,sum);
}
