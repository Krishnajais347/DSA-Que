#include <iostream>
#include <algorithm>
using namespace std;

int shorting(int arr[], int length)
{
    sort(arr, arr + length);
}

void linear_search(int length, int arr[], int n)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == n)
        {
            cout << "element found at indeding : " << i;
        }
        else
        {
            cout << "element not found enter the proper element ";
        }
    }
}

void binary_search(int length, int arr[], int n)
{

    int start = 0, end = length - 1;
    int target = n;
    while (arr[start] <= arr[end])
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            cout << "element found at indexing : " << mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
    int main()
    {

        int n;
        cout << "enter the  element that ypu want to. search in an array\n";

        cin >> n;
        int arr[] = {43, 1, 57, 78, 90};
        int length = sizeof(arr) / sizeof(arr[0]);
        shorting(arr, length);

        // linear_search(length, arr, n);

        binary_search(length,arr,n);
    }
