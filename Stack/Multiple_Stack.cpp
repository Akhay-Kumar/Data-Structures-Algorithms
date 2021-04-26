#include <iostream>
#include <cstdlib>

using namespace std;

#define max 100
int stack[max];
int topA = -1, topB = max;

void pushA(int val)
{
    if (topA == topB - 1)
    {
        cout << "Stack Overfolw" << endl;
    }
    else
    {
        topA++;
        stack[topA] = val;
    }
}

void pushB(int val)
{
    if (topB - 1 == topA)
    {
        cout << "Stack Overfolw" << endl;
    }
    else
    {
        topB--;
        stack[topB] = val;
    }
}

int popA()
{
    int val;
    if (topA == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else
    {
        val = stack[topA];
        topA--;
        return val;
    }
}

int popB()
{
    int val;
    if (topB == max)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else
    {
        val = stack[topB];
        topA++;
        return val;
    }
}

void displayA()
{
    int i;
    if (topA == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        for (i = topA; i >= 0; i--)
        {
            cout << stack[i] << "\t" << endl;
        }
    }
}

void displayB()
{
    int i;
    if (topB == max)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        for (i = topB; i < max; i++)
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
        cout << "\n 1.Push in Stack A";
        cout << "\n 2.Push in Stack B";
        cout << "\n 3.Pop from Stack A";
        cout << "\n 4.Pop from Stack B";
        cout << "\n 5.Display Stack A";
        cout << "\n 6.Display Stack B";
        cout << "\n 7.Exit" << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            cout << "\n Enter the va;ue to push on Stack A:";
            cin >> val;
            pushA(val);
            break;
        case 2:
            cout << "\n Enter the va;ue to push on Stack B:";
            cin >> val;
            pushB(val);
            break;
        case 3:
            val = popA();
            if (val != -1)
            {
                cout << "The value popped from Stack A:" << val;
            }
            break;
        case 4:
            val = popB();
            if (val != -1)
            {
                cout << "The value popped from Stack B:" << val;
            }
            break;
        case 5:
            cout << "The content of stack A are :";
            displayA();
            break;
        case 6:
            cout << "The content of stack B are :";
            displayB();
            break;
        }
    } while (option != 7);
    return 0;
}