#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
    char str[100];
    int i;
    int alphabets=0,numbers=0,special=0,space=0;
    cout<<"Enter the string \n";
    gets(str); 
    for(i=0; str[i] != '\0'; i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {  
                alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9'){ 
                numbers++;
        }
        else if(str[i]==' '){
                space++;
        }
        else{
        special++;
        }
    }
    cout<<"\nAlphabets: "<<alphabets;
    cout<<"\nNumbers: "<<numbers;
    cout<<"\nSpaces: "<<space;
    cout<<"\nSpecial characters: "<<special;
    getch();
    return 0;
}