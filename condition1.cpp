#include <iostream>
using namespace std ;
int main(){
float score = 15.5;
float p = 7.5;
float *ptr = &score;
(*ptr)++;
*ptr = p;
cout << *ptr << " " << score<< " " << p;


}
