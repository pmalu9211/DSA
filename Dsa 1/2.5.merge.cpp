#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *merge(int arr[], int start, int end)
{
    int 
}

void merge_sort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

}

int main()
{
    int arr[6] = {6, 3, 7, 2, 9, 1};
    merge_sort(arr, 0, 5);
}