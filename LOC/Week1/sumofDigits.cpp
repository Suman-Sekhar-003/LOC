#include <iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "Enter a natural number: ";
    cin >> num;
    do{
        sum = sum + num % 10;
        num = num / 10;
    } while(num > 0);
    cout << "Sum of digit is "<< sum << endl ;
    return 0;
}