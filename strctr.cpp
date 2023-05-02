#include<iostream>
using namespace std;
 abstract class Rectangle{
	int width;
	int height;
	int area(){
		return width*height;
	}
};
int main(){
	Rectangle rect;
	rect.width=20;
	rect.height=30;
	cout <<rect.area();
}
