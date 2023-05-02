#include<iostream>
using namespace std;
int main(){
 int x=8;
 int y=11;
 int *c=&y;
 int *a=&x;
 *a=--x;*c=y--;
 cout<<x<<y<<endl;
 cout<<--(*a)<<++(*c)<<endl;
 *a=++y;
 *c=--y;
 cout<<x<<y<<endl;
 cout<<(*a)--<<++(*c);
  }

