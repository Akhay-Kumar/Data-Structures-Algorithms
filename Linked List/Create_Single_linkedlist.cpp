/*
There are two of creating a single linked list.
First method is by using Self Referential Structure
Second method is by using Class as C++ has OOPs
*/

#include <iostream>

using namespace std;

class Node 
{
    public:
        int data;
    Node *next;    
};

void display(Node *n)
{
    while(n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    cout << "Enter first Number :" << endl;
    cin >> head->data;

    head->next = second;

    cout << "Enter Second Number :" << endl;
    cin >> second->data;
    second->next = third;

    cout << "Enter third Number :" << endl;
    cin >> third->data;
    third->next = NULL;

    display(head);
    return 0;
}