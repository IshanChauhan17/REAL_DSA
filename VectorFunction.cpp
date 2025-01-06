#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<char> a = {'a','b','c','d'};

    // to check the size of vector = size()
    cout<<"size of a vector is : "<<a.size()<<endl;
    for(char value : a){
        cout<<value<<endl;
    }

    // to add value in empty vector or vector at end of vector= push_back()
    a.push_back('z');
    a.push_back('y');
    a.push_back('x');
    cout<<"size of a vector after push_back is : "<<a.size()<<endl;
    for(char value : a){
        cout<<value<<endl;
    }

    // to delete last value of vactor we us, and no need to pass value as it automatically pop last value = pop_back()
    a.pop_back();
    cout<<"size of a vector after pop_back is : "<<a.size()<<endl;
    for(char value : a){
        cout<<value<<endl;
    }

    // to print 1st value of vector we use = front()
    cout<<" "<<a.front()<<endl;

    // to print last value of vector we use = back()
    cout<<" "<<a.back()<<endl;

    // to print value of particular index we use = at()
    cout<<" "<<a.at(4);
    
    return 0;
}