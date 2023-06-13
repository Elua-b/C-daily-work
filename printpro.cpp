#include<iostream>
using namespace std;

int main(){
 char buffer[20];
 cout<<"Enter your name: "<<endl;


 cin.getline(buffer,20);
 cout<<"Hello "<<buffer<<endl;
}