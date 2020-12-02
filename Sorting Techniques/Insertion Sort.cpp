/*
Algorithm for Insertion Sort
Step 1 − If it is the first element, it is already sorted. return 1;
Step 2 − Pick next element
Step 3 − Compare with all elements in the sorted sub-list
Step 4 − Shift all the elements in the sorted sub-list that is greater than the 
         value to be sorted
Step 5 − Insert the value
Step 6 − Repeat until list is sortedStep 1 − If it is the first element, it is already sorted. return 1;
Step 2 − Pick next element
Step 3 − Compare with all elements in the sorted sub-list
Step 4 − Shift all the elements in the sorted sub-list that is greater than the 
         value to be sorted
Step 5 − Insert the value
Step 6 − Repeat until list is sorted
*/

#include<iostream>
using namespace std;

void insertion(int *array,int n)
{
    int i,value,index;
    for(i=1;i<n;i++)
    {
        /* select value to be inserted */
        value = array[i];
        index = i;
        /*locate hole position for the element to be inserted */
        while(index > 0 && array[index-1] > value)
        {
            array[index] = array[index-1];
            index--;
        }
        /* insert the number at hole position */
        array[index]= value;
    }
}
// function to print the array
void display(int *array,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << array[i];
    }
}
// driver code
int main()
{
    int array[100],n;
    cout << "Insertion Sort"<<endl;
    cout << "Enter the number of element in Array :"<<endl;
    cin >> n;
    cout << "Enter the elment of Array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    cout << "Array befor Insertion sort :"<<endl;
    display(array,n);
    cout <<endl;
    insertion(array,n);
    cout << "Array after Insertion Array :"<<endl;
    display(array,n);
    return 0;
}

/*
This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2), where n is the number of items.
*/