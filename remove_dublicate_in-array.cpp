#include <iostream>
using namespace std;

void remove_dublicate(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < length - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                length--;
                j--;
            }
        }
    }

    cout << "the currect array is : - ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    // cout << "enter the  element that ypu want to. search in an array\n";
    // cin >> n;
    int arr[] = {43, 43, 57, 78, 100, 45, 67, 43, 57, 100};
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
