#include <iostream>
#include <string>

using namespace std;

struct User {
    string name;
    int age;
    string email;
    User* next;
};

void displayUsers(User* head) {
    if (head == NULL) {
        cout << "Linked list is empty!" << endl;
        return;
    }

    User* current = head;
    while (current != NULL) {
        cout << "Name: " << current->name << endl;
        cout << "Age: " << current->age << endl;
        cout << "Email: " << current->email << endl;
        cout << endl;

        current = current->next;
    }
}

int main() {
    User* head = NULL;
    int numUsers;
    cout << "Enter the number of users: ";
    cin >> numUsers;

    for (int i = 0; i < numUsers; i++) {
        User* newUser = new User;
        cout << "Enter name for user " << i+1 << ": ";
        cin >> newUser->name;
        cout << "Enter age for user " << i+1 << ": ";
        cin >> newUser->age;
        cout << "Enter email for user " << i+1 << ": ";
        cin >> newUser->email;
        newUser->next = head;
        head = newUser;
    }

    displayUsers(head);

    return 0;
}

