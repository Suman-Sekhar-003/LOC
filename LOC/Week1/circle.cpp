#include <iostream>
using namespace std;
int main(){
    float radius;
    cout << " Enter the radius of the circle : ";
    cin >> radius;
    cout << "Diameter of circle is : " << radius/2 << endl;
    cout << "Circumference of circle is : " << 2*3.14*radius << endl;
    cout << "Area of circle is : " << 3.14*radius*radius << endl;
    return 0;
}