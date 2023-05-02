#include<iostream>
using namespace std;
int main()
{
int x=8;
int y=11;
int *c=&y;
int *a=&x;
*a=--x;*c=y--;
cout<<"x="<<x<<" and y="<<y<<endl;
cout<<"a="<<--(*a)<<" and c="<<++(*c)<<endl;
*a=++y;
*c=--y;
cout<<"x="<<x<<" and y="<<y<<endl;
cout<<"a="<<(*a)--<<" and c="<<++(*c)<<endl;
return 0;
}

