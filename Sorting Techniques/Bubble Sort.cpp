/*
Bubble Sort Algorithm
bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort
*/
#include<iostream>
using namespace std;

void bubble(int *array,int n)
{
    // run loops two times: one for walking throught the array
    // and the other for comparison
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        for(int j=0;j<(n-i);j++)
        {
            // To sort in descending order, change > to < in this line.
            if(array[j] > array[j+1])
            {
                // swap if greater is at the rear position
                swap(array[j],array[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }

}

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp; 
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
    cout << "Bubble sort"<<endl;
    cout << "Enter the number of element :"<<endl;
    cin >> n;
    cout << "Enter the element of Array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    cout << "Array Before Bubble sort :"<<endl;
    display(array,n);
    cout << endl;
    cout << "Array After Bubble sort :"<<endl;
    bubble(array,n);
    display(array,n);
    return 0;
}
/*
This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2) where n is the number of items.
*/