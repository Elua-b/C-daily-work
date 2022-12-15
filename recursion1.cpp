#include <iostream>
using namespace std;
int suming(int n){
	int sum =0;
	for (int i=1;i<=n;i++){
		sum+=sum;
		return sum;
	}
}
 int main(){
 	cout <<suming(5);
 	cout<<suming(15);
 	return 0;
 }
