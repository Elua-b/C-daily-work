#include <iostream>
using namespace std;
class Rectangle {
int width, height;
public:
void set_values (int,int);
int area () {return width*height;}
};
void Rectangle::set_values (int x, int y) {
width = x;
height = y;
}
void displayArea( Rectangle rec){
cout<<"The area is"<<rec.area();
}
int main () {
Rectangle rect, rectb;
rect.set_values (3,4);
rectb.set_values (5,6);
cout << "rect area: " << rect.area() << endl;
cout << "rectb area: " << rectb.area() << endl;
displayArea(rect);
return 0;
}
