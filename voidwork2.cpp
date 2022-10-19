#include<iostream>
using namespace std;
double maximum (double x,double y,double z){
	double maxiValue=x;
	if(y>maxiValue)
	maxiValue=y;
	if(z>maxiValue)
	maxiValue=z;
	return maxiValue;
}
int main(){
  cout<<"the answer is "<<maximum(12,12,12);
	
}
