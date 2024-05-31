#include<iostream>
using namespace std;
void maxRepeatedInteger(int nums[], int size){
    int max_count = 0;
    cout << "\nMost occurred number: ";
    for (int i = 0; i < size; i++){
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                count++;
        if (count > max_count)
            max_count = count;
    }
    for (int i = 0; i < size; i++){
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                count++;
        if (count == max_count)
            cout << nums[i] << ", Occurred " <<max_count << " Times " << endl;
    }
}
int main(){
    int nums[] = {45,24,15,48,45,21,15,15,68,45,15};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "The array is : ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    maxRepeatedInteger(nums, n);
    return 0;
}