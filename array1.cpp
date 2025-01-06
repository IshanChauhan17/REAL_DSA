#include <iostream>

using namespace std;

int main(){
    
    int marks[5] = {10,20,30,40,50};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    marks[0] = 100;
    cout<<marks[0]<<endl;

    // indexing : 0  to size-1

    return 0;
}