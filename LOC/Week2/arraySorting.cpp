#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int arr[] = {34,56,24,74,15};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n);
  cout << "Sorted array: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}