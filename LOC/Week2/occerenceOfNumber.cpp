#include<iostream>
using namespace std;
void count(int arr[10]) {
    int num, count=0;
    cout << "Enter any number to check the number of occurrence : " << endl;
    cin >> num;
    for( int i=0; i<10; i++){
        if ( num == arr[i]){
            count ++;
        }
    }
    cout << "Number of occurrence of the number is : " << count;
}
int arr[10];
int main(){
    cout << "Enter the elements of the array : " << endl;
    for (int i=0; i<10; i++){
        cin >> arr[i] ;
    }
    count(arr);
    return 0;
}