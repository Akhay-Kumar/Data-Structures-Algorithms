#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *start = nullptr;

struct Node *create_ll(struct Node *start)
{
    struct Node *newNode,*ptr;
    int num;
    cout << "Enter -1 to end" << endl;
    cout << "Enter the data" << endl;
    cin >> num;
    while (num != -1)
    {
        newNode = new Node;
        newNode -> data = num;
        if(start == NULL)
        {
            newNode -> next = NULL;
            start = newNode ;
        }
        else
        {
            ptr = start;
            while (ptr -> next != NULL)
            ptr = ptr -> next;
            ptr -> next = newNode;
            newNode -> next = NULL;
        }
        cout << "Enter the data :" << endl;
        cin >> num;
    }
    return start;
};

struct Node *display(struct Node *start)
{
    struct Node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        cout << ptr -> data << "\t" ;
        ptr = ptr -> next;
    }
    cout << endl;
    return start;
};

struct Node *insert_beg(struct Node *start)
{
    struct Node *newNode;
    int num;
    cout << "Enter the data :" << endl;
    cin >> num;
    newNode = new Node;
    newNode -> data = num;
    newNode -> next = start;
    start = newNode ;
    return start;
};

struct Node *insert_end(struct Node *start)
{
    struct Node *newNode,*ptr;
    int num;
    cout << "Enter the data :" << endl;
    cin >> num;
    newNode = new Node;
    newNode -> data = num;
    newNode -> next = NULL;
    ptr = start;
    while(ptr->next != NULL)
    {
        ptr = ptr -> next;
    }
    ptr -> next = newNode;
    return start;
};

struct Node *insert_before(struct Node *start)
{
    struct Node *newNode,*current,*previous;
    newNode = new Node;
    int num,val;
    cout << "Enter the data : " << endl;
    cin >> num;
    cout << "Enter the value before which the data has to be inserted :" << endl;
    cin >> val;
    newNode -> data = num;
    current = start;
    while (current -> data != val)
    {
        previous = current;
        current = current -> next;
    }
    previous -> next = newNode;
    newNode -> next = current;
    return start;
};

struct Node *insert_after(struct Node *start)
{
    struct Node *newNode,*current,*previous;
    int num,val;
    newNode = new Node;
    cout << "Enter the data : " << endl;
    cin >> num;
    cout << "Enter the value after which the data has to be inserted : " << endl;
    cin >> val;
    newNode -> data = num;
    current = start;
    previous = current;
    while(previous -> data != val)
    {
        previous = current;
        current = current -> next;
    }  
    previous -> next = newNode;
    newNode -> next = current;
    return start;
};

struct Node *delete_beg(struct Node *start)
{
    struct Node *current;
    current = start;
    start = start -> next;
    free(current);
    return start;
};

struct Node *delete_end(struct Node *start)
{
    struct Node *current,*previous;
    current = start;
    while(current ->next != NULL)
    {
        previous = current;
        current = current -> next;
    }
    previous -> next = NULL;
    free(current);
    return start;
};

struct Node *delete_node(struct Node *start)
{
    struct Node *current,*previous;
    int val;
    cout << "Enter the value of the node which has to be deleted : " << endl;
    cin >> val;
    current = start;
    if(current -> data == val)
    {
        start = delete_beg(start);
        return start;
    }
    else
    {
        while(current -> data != val)
        {
            previous = current;
            current = current -> next;
        }
        previous -> next = current -> next;
        free(current);
        return start;
    }
};

struct Node *delete_after(struct Node *start)
{
    struct Node *current,*previous;
    int val;
    cout << "Enter the valuse after which the node has to deleted : " << endl;
    cin >> val;
    current = start;
    previous = current;
    while (previous -> data != val)
    {
        previous = current;
        current = current -> next;
    }
    previous -> next = current -> next;
    free(current);
    return start;
};

struct Node *delete_list(struct Node *start)
{
    struct Node *current;
    if(start != NULL)
    {
        current = start;
        while(current != NULL)
        {
            cout << current -> data << "is to be deleted next." << endl;
            start = delete_beg(current);
            current = start;
        }
    }
    return start;
};

struct Node *sort_list(struct Node *start)
{
    struct Node *ptr1,*ptr2;
    int temp;
    ptr1 = start;
    while(ptr1->next != NULL)
    {
        ptr2 = ptr1 ->next;
        while(ptr2 != NULL)
        {
            if(ptr1 ->data > ptr2 -> data)
            {
                temp = ptr1 -> data;
                ptr1-> data = ptr2 -> data;
                ptr2 -> data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
};

int main()
{
    int option;
    do
    {
        cout << "*** MAIN MENU ***" << endl;
        cout << " 1 : Creat a list" << endl;
        cout << " 2 : Display the list" << endl;
        cout << " 3 : Add a node at the beginning" << endl;
        cout << " 4 : Add a node at the end" << endl;
        cout << " 5 : Add a node before a given Number" << endl;
        cout << " 6 : Add a node after a given Number" << endl;
        cout << " 7 : Delete a node from the beginning" << endl;
        cout << " 8 : Delete a node from the end" << endl;
        cout << " 9 : Delete a given node" << endl;
        cout << " 10 : Delete a node after a given number" << endl;
        cout << " 11 : Delete the entire list" << endl;
        cout << " 12 : Sort the list" << endl;
        cout << " 13 : EXIT" << endl;
        cin >> option ;

        switch (option)
        {
            case 1:
                start = create_ll(start);
                cout << "Linked list Created" << endl;
                break;
            case 2:
                start = display(start);
                break; 
            case 3:
                start = insert_beg(start);
                break;
            case 4:
                start = insert_end(start);
                break;
            case 5:
                start = insert_before(start);
                break;
            case 6:
                start = insert_after(start);
                break;
            case 7:
                start = delete_beg(start);
                break;
            case 8:
                start = delete_end(start); 
                break;
            case 9:
            start = delete_node(start);
                break;
            case 10:
                start = delete_after(start);
                break;
            case 11:
                start = delete_list(start);
                cout << "Linked List Deleted" << endl;
                break;
            case 12:
                start = sort_list(start);
                break;  
        }
    }
    while(option != 13);

    return 0;
}