#include <iostream>
#include <cstdlib>

using namespace std;

#define max 100

int stack[max];
int top = -1;

void push(int val)
{
    if (top == max - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top = top + 1;
        stack[top] = val;
    }
}

int pop()
{
    int val;
    if (top == -1)
    {
        cout << "Stck Underflow" << endl;
    }
    else
    {
        val = stack[top];
        top--;
        return val;
    }
}

int peek()
{
    if (top == -1)
    {
        cout << "Stck Underflow";
        return -1;
    }
    else
    {
        return (stack[top]);
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        cout << "Stck Underflow";
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            cout << stack[i] << "\t" << endl;
        }
    }
}

int main()
{
    int option, val;

    do
    {
        cout << "\n *** Main Minue ***" << endl;
        cout << "\n 1. Push";
        cout << "\n 2. Pop";
        cout << "\n 3. Peek";
        cout << "\n 4. Display";
        cout << "\n 5. Exit" << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter the value to be pushed on Stack";
            cin >> val;
            push(val);
            break;
        case 2:
            val = pop();
            if (val != -1)
            {
                cout << "The valuse deleted from stack is:" << val;
            }
            break;
        case 3:
            val = peek();
            if (val != -1)
            {
                cout << "The value stored at top of stack is:" << val;
            }
            break;
        case 4:
            display();
            break;
        }
    } while (option != 5);

    return 0;
}
