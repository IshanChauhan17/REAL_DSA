#include <iostream>

using namespace std;

// largest number
int main(){
    
    int num[] = {20,60,30,50,10};
    int size = 5;

    int largest = INT16_MIN;

    for(int i=0; i<size; i++){
        largest = max(num[i], largest);
    }
    cout<<"Largest number is : "<<largest;

    return 0;
}