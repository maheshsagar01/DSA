#include <bits/stdc++.h>
using namespace std;

int binaryS(int arr[], int size, int key)
{
    int s = 0, e = size - 1, mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (key == arr[mid])
            return mid;
        else if (key > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
}

int main()
{
    int arr[100], size, key;
    cout << "Enter size of array:";
    cin >> size;
    cout << "Enter elements of array in sorted order:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key: ";
    cin >> key;

    cout << binaryS(arr, size, key);

    return 0;
}