#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int rollNumber;
    float marks;
};

int main()
{
    Student student;
    cout << "Enter the name of the student: ";
    cin >> student.name;
    cout << "Enter age of the student: ";
    cin >> student.age;
    cout << "Enter roll numberof the student: ";
    cin >> student.rollNumber;
    cout << "Enter marks of a student: ";
    cin >> student.marks;

    ofstream file;
    file.open("stdnt4.txt");
    file << "Name of a student:" << student.name << endl;
    file << "Age of a student: " << student.age << endl;
    file << "Roll Number of a student: " << student.rollNumber << endl;
    
    file << "Marks of a student: " << student.marks << endl;
    
    file.close();

    ifstream file1;
    file1.open("stdnt4.txt");
    string display;
    while (getline(file1, display))
    {
        cout << display << endl;
        
        
              
    }
    
	file1.close();

    return 0;
}
