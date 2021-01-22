/* Given an array, write functions to find the minimum and maximum elements in it.*/
#include<iostream>
#include<cstdlib>

using namespace std;

int getMax(int array[], int len)
{
    int max = 0;
    for(int i=0; i<len; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int getMin(int array[], int len)
{
    int min;
    for(int i=0; i<=len; i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}


int main()
{
    int array[] = { 12, 1234, 45, 67, 1 };
    int len = sizeof(array) / sizeof(array[0]);
    cout << "Maximum Element of array :" << getMax(array,len)<<endl;
    cout << "Minimum Element of array :" << getMin(array,len)<<endl;
    return 0;
}

/* Time Complexity:O(n) */