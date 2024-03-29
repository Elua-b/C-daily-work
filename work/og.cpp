#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <fstream>

using namespace std;

struct Student
{
    string studentName;
    int age;
    int rollNumber;
    float marks;
};

bool compare(Student a, Student b) {
    return a.marks > b.marks;
}

void merge(vector<Student> &arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<Student> L, R;
    for (i = 0; i < n1; i++) {
        L.push_back(arr[l + i]);
    }
    for (j = 0; j < n2; j++) {
        R.push_back(arr[m + 1 + j]);
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (compare(L[i], R[j])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<Student> &arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}


int main()
{
    vector<Student> student;
    
    for(int i=0; i< 3;i++) {
    	Student s;
    	int rollNumber, age, marks;
        string studentName;
        cout<<"Student "<<i+1<<":"<<endl;
    	cout << "Enter  the studentName " << i+1 << " :";
    	cin >> s.studentName;

    	cout << "Enter the age of  student " << i+1 << " : ";
    	cin >> s.age;
    	
    	if(s.age<10 || s.age >30) {
    		cout << "the allowed  age is between 10 and 30!!" << endl;
    		i--;
    		continue;
	}
    	cout << "Enter  the student rollNumber " << i+1 << " : ";
    	cin >> s.rollNumber;
    	 if (s.rollNumber < 1) {
            cout << "Invalid  Rollnumber try again !! " << endl;
            i--;
            continue;
        }

    	cout << "Enter  the student marks " << i+1 << " : ";
    	cin >> s.marks;
    	if (s.marks < 0 || s.marks > 50) {
            cout << " the  valid marks  are  between 0 and 50." << endl;
            i--;
            continue;
        }
		cout << "##################################################################" <<endl;
    	student.push_back(s);
    	
    	
	}
    

    ofstream file;
    file.open("studentFile.txt");
    for (int i = 0; i < student.size(); i++) {
        file << student[i].studentName << " " << student[i].age << " " << student[i].rollNumber << " " << student[i].marks << endl;
    }
    
   
    file.close();
    
    cout << "*************************************************done!!!" << endl;
    
    mergeSort(student, 0, student.size() - 1);
    
    cout << "Sorted data: " << endl;
    for (int i = 0; i < student.size(); i++) {
    	
    	cout << "The " << i+1 <<"sorted are:" << endl;
    	
        cout << "Name: " << student[i].studentName << "\t";
        cout << "Rollnumber: " << student[i].rollNumber << "\t";
		cout << "Age: " << student[i].age << "\t";
		cout << "Marks: " << student[i].marks << "\t";
		cout<< endl;
    }
    
    int sum = 0;
    for (int i = 0; i < student.size(); i++) {
        sum += student[i].marks;
    }
    double avg = sum / (double)student.size();
    cout << endl;
    cout << endl;
    cout << endl;
    
    cout << " the avg-mark is: " << avg << endl;

    
   
    return 0;
}
