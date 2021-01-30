/* Program to cyclically rotate an array by given Unit.
Given an array, cyclically rotate the array clockwise by given Unit.
Examples:
Input:  arr[] = {1, 2, 3, 4, 5} unit = 1
Output: arr[] = {5, 1, 2, 3, 4} 
*/
#include<iostream>
#include<cstdlib>

using namespace std;

int rotate(int arr[],int len,int unit)
{
    int temp;
    while(unit > 0)
    {
    temp = arr[len-1];
        for(int i=len-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
    arr[0]=temp;
        unit--;
    }
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, unit = 3; 
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is \n"; 
    for (int i = 0; i < len; i++)
    {
        cout << arr[i]; 
    } 

    rotate(arr, len, unit); 

    cout << "\nRotated array is\n"; 
    for (int i = 0; i < len; i++)
    {
        cout << arr[i]; 
    } 

    return 0;
}

/* Time Complexity: O(n) As we need to iterate through all the elements
Auxiliary Space: O(1) */