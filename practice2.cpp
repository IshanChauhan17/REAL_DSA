#include <iostream>

using namespace std;

int lS(int arr[], int size, int target){
    int f =-1; int l = -1;
    for (int i =0; i<size; i++ ){
        if(arr[i] == target){
            if (f == -1){
                f = i;
            } 
            l = i;
        }
    }
    if (f != -1) {
        cout << "First occurrence at index: " << f << endl;
        cout << "Last occurrence at index: " << l << endl;
    } else {
        cout << "Element not found." << endl;
    }
}
int main(){
    int arr[] = {1,2,3,2,4,5,2,5};
    int size = 8;
    int target = 2;

    lS(arr,size, target);
    return 0;
}