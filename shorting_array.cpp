#include <iostream>
using namespace std;

void shorting_ascending(int arr[], int length)
{
    int tmp;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {

            if (arr[i] >= arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int k = 0; k < length; k++)
    {
        cout << arr[k] << " ";
    }
}

void shorting_decending(int arr[], int length)
{
    int tmp;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {

            if (arr[i] <= arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int k = 0; k < length; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int n;
    // cout << "enter the  element that ypu want to. search in an array\n";
    // cin >> n;
    int arr[] = {43, 1, 57, 78, 90};
    int length = sizeof(arr) / sizeof(arr[0]);
    shorting_ascending(arr, length);
    cout << endl;
    shorting_decending(arr, length);
}
