#include <iostream>

#include <vector>

using namespace std;

int main(){
    
    vector<int> vec; // by default value is 0
    // cout<<vec[0];

    vector<int> a = {1,2,3};
    cout<<a[0]<<endl;

    vector<int> b(5,0);
    cout<<b[0]<<endl;
    cout<<b[1]<<endl;
    cout<<b[2]<<endl;
    cout<<b[3]<<endl;
    cout<<b[4]<<endl;

    return 0;
}