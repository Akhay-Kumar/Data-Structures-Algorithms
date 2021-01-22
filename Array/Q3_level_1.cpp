/* Given an array (or string), the task is to reverse the array/string. */
#include<iostream>
#include<cstdlib>

using namespace std;

void revarr(int arr[], int len)
{
    int i=0,j=len-1,temp=0;
        while(i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
}

void display(int arr[], int len)
{
    int y=0;
    cout << "Array After reversing :";
    for(y=0; y<len ;y++)
    {
        cout << arr[y];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Array Before reversing :";
    for(int x=0; x<len ;x++)
    {
        cout << arr[x];
    }
    cout <<endl;
    revarr(arr,len);
    display(arr,len);
    return 0;
}
/* Time Complexity : O(n) */