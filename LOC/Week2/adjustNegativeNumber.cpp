#include <iostream>
#include <cstring> 
using namespace std; 
void rearrangeNegativeNumber(int num[], int n){
    int result[n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] >= 0)
            result[j++] = num[i];
    }
    if (j == n || j == 0)
        return;
    for (int i = 0; i < n; i++) {
        if (num[i] < 0)
            result[j++] = num[i];
    }
    memcpy(num, result, sizeof(result));
}
int main(){
    int num[] = {1,-4,5,-6,8,-5,-5,49,-56};
    int n = sizeof(num) / sizeof(num[0]);
    cout << "The array is : ";
    for (int i = 0; i < n; i++)
        cout << num[i] << " ";
    rearrangeNegativeNumber(num, n);
    cout << "\nAfter rearrange the array is : ";
    for (int i = 0; i < n; i++)
        cout << num[i] << " ";
    return 0;
}