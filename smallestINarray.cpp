#include <iostream>

using namespace std;


// SMALLEST number in array
int main(){
    
    int num[] = {2,9,5,7,8,1,-2};
    int size = 7;
    int smallest = INT16_MAX; // INT16_MAX is define as infinity in c++

    // logic is we comapre each value of array with infinity and store it in smallest variable and then run loop for this
    for (int i=0; i<size; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }

        // there is min() function which is used to give minimum of 2 numbers, so instead of if condition we can also write
        // smallest = min(num[i], smallest);
    }
    cout<<"Smallest number is : "<<smallest;

    return 0;
}