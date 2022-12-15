#include<iostream>
#include<math.h>
using namespace std;
int main(){
 float radius;
 float pi=3.14;
 float volume;
 cout<<"Enter the value of radius: "<<endl;
 cin>>radius;
 volume=4/3*pi*(radius*radius*radius);
 cout<<"The volume of asphere =="<<volume;
 return 0;
}
