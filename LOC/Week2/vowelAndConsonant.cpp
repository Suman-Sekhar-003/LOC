#include <iostream>
using namespace std;
int main(){
    char str[] = {"Suman"};
    int vowels, consonants, digits, spaces;
    vowels = consonants = digits = spaces = 0;
    for(int i = 0; str[i]!='\0'; ++i) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            ++vowels;
        } 
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')) {
            ++consonants;
            }
    }
   cout << "The string is: " << str << endl;
   cout << "Vowels: " << vowels << endl;
   cout << "Consonants: " << consonants << endl;
   return 0;
}