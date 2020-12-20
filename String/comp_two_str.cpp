#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
    char str1[50],str2[50];
    int len1,len2,same,i;
    len1=len2=same=i=0;
    cout << "Enter the first String"<<endl;
    cin >> str1[50];
    cout << "Enter the second String"<<endl;
    cin >> str2[50];
    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 == len2)
    {
        while(i < len1)
        {
            if(str1[i] == str2[i])
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if(i == len1)
        {
            same = 1;
            cout << "The two strung are equal"<<endl;
        }
    }
    if(len1 != len2)
    {
        cout << "The two string are not equal"<<endl;
    }
    if(same == 0)
    {
        if(str1[i] > str2[i])
        {
            cout << "\nString 1 is greater then string 2."<<endl;
        }
        else if (str1[i] < str2[i])
        {
            cout << "\nString 2 is greater then string 1."<<endl;
        }
    }
    return 0;
}
