#include <iostream>
using namespace std;

void remove_dublicate(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int tmp = 0;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < length; k++)
                {
                    arr[j] = arr[j + 1];
                }
                length--;
            }
        }
    }

    cout << "the currect array is : - ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i]<<" ";
    }
}
int main()
{
    int n;
    // cout << "enter the  element that ypu want to. search in an array\n";
    // cin >> n;
    int arr[] = {43, 100, 57, 78, 100, 45, 67, 43, 57, 100};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "the array is : - ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    remove_dublicate(arr, length);
    cout << endl;
}
