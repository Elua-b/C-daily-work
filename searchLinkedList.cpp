#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int Search(Node *head, int x)
{
    Node *current = head;
    int index = 0;
    while (current != NULL)
    {
        if (current->data == x)
        {
            return index;
        }
        index++;
        current = current->next;
    }
    return -1;
};

void Insert(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
}

void Print(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout << Search(head, 1) << endl;
    Print(head);
    return 0;
}
