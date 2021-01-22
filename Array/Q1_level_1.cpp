/*
Check if a key is present in every segment of size k in an array.
Question:- Given an array arr[] and size of array is n and value of key is x, and give you a times of key present in array k. The task is to find that the key x present in arr[].
Examples:-
Input :
arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12}
x = 3
k = 3
Output : Yes
There are 4 non-overlapping segments of size k in the array, {3, 5, 2}, {4, 9, 3}, {1, 7, 3} and {11, 12, 3}. 3 is present all segments.

Input :
arr[] = { 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25}
x = 23
k = 5
Output :No
*/
#include<iostream>
#include<cstdlib>

using namespace std;

bool find_x_in_arr_Kth_time(int arr[],int x,int k,int n)
{
    int count=0,i;
    for(i=0;i<n+1;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    cout << count <<" Times "<< x <<" Was found in Array"<<endl;
    if(count==k)
    {
        return true;
    }
    cout << count <<" != "<< k <<" Times "<<endl;
    return false;
}

int main()
{
    int arr[] = { 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25}; 
    int x = 23, k = 5; 
    int n = sizeof(arr) / sizeof(arr[0]);
    if(find_x_in_arr_Kth_time(arr,x,k,n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}