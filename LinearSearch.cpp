#include <iostream>

using namespace std;

// Linear Search : to search value in array we use this algorithm.
// check all index values one by one and where you find data/value get out from there
// time complexity is o(n)

// there is an array and you need target index value.find it through linear search. 
int LinearSearch(int arr[], int size, int target){
    for (int i = 0; i<size; i++ ){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,4,5,6,8};
    int size = 6;
    int target = 5;

    cout<<LinearSearch(arr,size,target);
    return 0;
}