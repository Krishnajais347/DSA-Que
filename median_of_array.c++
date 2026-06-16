#include <iostream>
#include <algorithm>
using namespace std;

void shorting(int arr[], int length)
{
    sort(arr, arr + length);
}
void median(int arr[], int length)
{
    int tmp;
    tmp = length / 2;
    if (length % 2 == 0)
    {
        cout << "the median of even array is : - " << arr[tmp] << "," << arr[tmp + 1];
    }
    else
    {
        cout << "the median of odd array is : - " << arr[tmp];
    }
}

int main()
{
    int n;
    int arr[] = {43, 1, 57, 78, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "the array is : - ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    shorting(arr, length);
    median(arr, length);
}
