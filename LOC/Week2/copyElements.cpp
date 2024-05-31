#include <iostream>
using namespace std;
int main(){
    int arr[] = {34,56,24,74,15};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << "The array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    int arr_copy[n];
    copy(arr, arr + n, arr_copy);
    cout << "The copied array is: ";
    for (int i = 0; i < n; i++)
        cout << arr_copy[i] << " ";
    cout << endl;
    return 0;
}