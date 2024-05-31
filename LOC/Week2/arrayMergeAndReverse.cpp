#include<iostream>
using namespace std;
int main(){
    int arr1[50], arr2[50], arrMerge[100];
    int s1, s2, i, k;
    cout<<"Enter the size of 1st array : ";
    cin>>s1;
    cout<<"Enter the elements of 1st array : ";
    for(i=0; i<s1; i++)
    {
        cin>>arr1[i];
        arrMerge[i] = arr1[i];
    }
    k = i;
    cout<<"\nEnter the size of 2nd Array : ";
    cin>>s2;
    cout<<"Enter the elements of 2nd Array: ";
    for(i=0; i<s2; i++)
    {
        cin>>arr2[i];
        arrMerge[k] = arr2[i];
        k++;
    }
    cout<<"\nThe merged Array in reverse order :\n";
    for(i= --k; i>=0; i--)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    return 0;
}