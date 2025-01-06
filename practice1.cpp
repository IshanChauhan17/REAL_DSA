#include <iostream>

using namespace std;

// Count how many times a number appears in an array
int lS(int arr[], int size, int target){
    int count = 0;
    for (int i = 0; i<size; i++){
        if(arr[i] == target){
            count ++;
        }
    }
    return count;
}
int main(){
    int arr[] = {1,2,3,2,4,5,2,5};
    int size = 8;
    int target = 2;

    cout<<lS(arr,size, target);

    return 0;
}