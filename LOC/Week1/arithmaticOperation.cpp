#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    cout << "Enter 1st number :"<< endl;
    cin >> num1;
    cout << "Enter 2nd number :"<< endl;
    cin >> num2;
    char oprt ;
    cout << "Enter an arithmatic operator : ";
    cin >> oprt;
    switch(oprt) {
        case '+':
        cout << "Sum of the numbers is : " << num1 + num2 ;
        break;
        case '-':
        cout << "Substraction of the numbers is : " << num1 - num2 ;
        break;
        case '/':
        cout << "Division of the numbers is : " << num1 / num2 ;
        break;
        case '*':
        cout << "Multiplication of the numbers is : " << num1 * num2 ;
    }
    return 0;
}