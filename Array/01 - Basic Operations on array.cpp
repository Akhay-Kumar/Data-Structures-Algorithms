#include<iostream>

using namespace std;

void insert_at_last(int *array,int n)
{
    int val;
    cout << "Enter the Element to be iserted at last"<<endl;
    cin >> val;
    n++;
    array[n] = val;
    for(int x=0;x<n;x++)
    {
        cout << array[x];
    }

}

void insert_at_n(int *array,int n)
{
    int i,pos,val;
    cout << "Enter the position where you want to enter the elemnt."<<endl;
    cin >>pos;
    cout << "Enter the value to insert in the array." <<endl;
    cin >> val;
    i = n;
    while(i>=pos)
    {
        array[i + 1] = array[i];
        i = i - 1;
    }
    n = n + 1;
    array[pos] = val;
    for(int x=0;x<n;x++)
    {
        cout << array[x];
    }

}
void delete_from_last(int *array,int n)
{
    n = n-1;
    for(int x=0;x<n;x++)
    {
        cout << array[x];
    }
}

void delete_from_n(int *array,int n)
{
    int i,pos;
    cout << "Enter the position where you want to enter the elemnt."<<endl;
    cin >>pos;
    i = pos;
    while(i <= n-1)
    {
        array[i]=array[i+1];
        i = i + 1;
    }
    n = n - 1;
    for(int x=0;x<n;x++)
    {
        cout <<array[x];
    }

}

int main()
{
    int n=0;
    cout << "Enter the Number of elemnt in Array"<<endl;
    cin >>n;
    cout << "Enter "<<n<<" element in the Array"<<endl;
    int array[100];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }

    cout << "Operations on Array"<<endl;
    cout << "**Index** \n1. Insert Element At last. \n2. Insert Element at N position. \n3. Delete Element from Last. \n4. Delete Element from N position. \n5. Exit."<<endl;
    int operation;
    cout << "Enter the Operation No. to perform it on Array"<<endl;
    cin >> operation;
    switch(operation)
    {
        case 1:
        insert_at_last(array,n);
        break;
        case 2:
        insert_at_n(array,n);
        break;
        case 3:
        delete_from_last(array,n);
        break;
        case 4:
        delete_from_n(array,n);
        break;
        case 5:
        exit(1);
        default:
        cout << "Enter the Valid Option"<<endl;


    }
    return 0;
}

