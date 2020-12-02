/*
Algorithms Selection Sort
Step 1 − Set MIN to location 0
Step 2 − Search the minimum element in the list
Step 3 − Swap with value at location MIN
Step 4 − Increment MIN to point to next element
Step 5 − Repeat until list is sorted
*/

#include<iostream>
using namespace std;

void selection(int *array,int n)
{
    int loc;
    for(int i=0;i<(n-1);i++)
    {
        /* set current element as minimum*/
        loc = i;

        /* check the element to be minimum */
        for(int j=(i+1);j<n;j++)
        {
            if(array[i]<array[j])
            {
                loc = j;
            }
        }
        /* swap the minimum element with the current element*/
        if(loc != i)
        {
            swap(array[loc],array[i]);
        }    
    }
}

void swap(int &a,int &b)
{
    int temp=0;
    temp = a;
    b = a;
    a = temp;
}
// function to print the array
void display(int *array,int n)
{
    for(int x=0;x<n;x++)
    {
        cout << array[x];
    }
}
// driver code
int main()
{
    int array[100],n;
    cout << "Selection Short"<<endl;
    cout << "Enter the Number of element:"<<endl;
    cin >> n;
    cout << "Enter the Element of Array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    cout << "Array Before Slection Sorting"<<endl;
    display(array,n);

    selection(array,n);
    
    cout << "Array After Selection Sorting"<<endl;
    display(array,n);
    return 0;
}

/*
This algorithm is not suitable for large data sets as its average and worst case complexities are of Ο(n2), where n is the number of items.
*/