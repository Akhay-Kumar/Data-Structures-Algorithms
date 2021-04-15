/* Count pairs with given sum
Given an array of integers, and a number ‘sum’, find the number of pairs of integers in the array whose sum is equal to ‘sum’.
Examples:  
Input  :  arr[] = {1, 5, 7, -1}, 
          sum = 6
Output :  2
Pairs with sum 6 are (1, 5) and (7, -1)
Input  :  arr[] = {1, 5, 7, -1, 5}, 
          sum = 6
Output :  3
Pairs with sum 6 are (1, 5), (7, -1) & (1, 5)         
Input  :  arr[] = {1, 1, 1, 1}, 
          sum = 2
Output :  6
There are 3! pairs with sum 2.
Input  :  arr[] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1}, 
          sum = 11
Output :  9
*/
#include<iostream>
#include<cstdlib>

using namespace std;

int getPairsCount(int arr[],int len, int sum)
{
    int count=0;
    
    for(int x=0;x<len;x++)
    {
        for(int i=x+1;i<len;i++)
        {
            if(arr[i]+arr[x] == sum)
            {
                count++;
            }
        }
    }
    return count;

}

int main()
{
    int arr[] = { 1, 5, 7, -1, 5 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is " << getPairsCount(arr, len, sum);
    return 0;
}