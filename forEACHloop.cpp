#include <iostream>
#include <vector>

using namespace std;

// FOR EACH LOOP
int main(){
    
    vector<char> a = {'a','b','c','d','e'};

    for(char value : a){
        cout<<value<<endl;
    }
    return 0;
}