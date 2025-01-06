#include <iostream>

using namespace std;

int main(){
    
    int marks[5] = {1,2,3,4,5};

    int size = 5; 

    // msust know the size of array. use sizeof(marks)/sizeof(int) to know size of array.
    // as marks[0] contain 4 byte as it is int so 5 number contain 5*4 = 20.
    // cout<< sizeof(marks)/sizeof(int);

    for(int i = 0; i<size; i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}