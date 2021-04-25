#include <iostream>
#include <cstdlib>

using namespace std;
#define Max 100
void insert(void);
int delete_element(void);
int peek(void);
void display(void);

int queue[Max];
int front = -1, rear = -1;

int main()
{
    int option, val;
    do
    {
        cout << "*** Main Menu ***";
        cout << "\n1. Insert an element";
        cout << "\n2. Delete an element";
        cout << "\n3. Peek";
        cout << "\n4. Display the queue";
        cout << "\n5. Exit" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            val = delete_element();
            if (val != -1)
                cout << "\n The Number deleter is : " << val;
            break;
        case 3:
            val = peek();
            if (val != -1)
                cout << "\n The First value in queue is :" << val;
            break;
        case 4:
            display();
            break;
        }
    } while (option != 5);

    return 0;
}

void insert()
{
    int num;
    cout << "\n Enter the number to be inserted in the queue :";
    cin >> num;
    if (rear == Max - 1)
    {
        cout << "overflow_error";
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = num;
}

int delete_element()
{
    int val;
    if (front == -1 || front > rear)
    {
        cout << "Underflow";
    }
    else
    {
        val = queue[front];
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
        return val;
    }
}

int peek()
{

    if (front == -1 || front > rear)
    {
        cout << "Queue is empty";
        return -1;
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    int i;
    cout << "\n";
    if (front == -1 || front > rear)
    {
        cout << "Queue is Empty";
    }
    else
    {
        for (i = front; i < rear; i++)
        {
            cout << "\t" << queue[i] << endl;
        }
    }
}