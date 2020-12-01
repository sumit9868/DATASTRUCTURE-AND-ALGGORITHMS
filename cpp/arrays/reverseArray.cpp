#include <iostream>
using namespace std;
void display(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverser(int arr[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int idx = (length - i - 1) % length;
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
    display(arr,length);
}
int main()
{
    int arr[] = {1, 2, 6, 4, 3};
    int length = 5;
    display(arr, length);
reverser(arr,length);

    return 0;
}