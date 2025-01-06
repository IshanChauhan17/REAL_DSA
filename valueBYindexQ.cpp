#include <iostream>

using namespace std;

int main(){
    
    int a[6] = {20,40,10,120,60,30};

    int smallest = 0;
    int largest = 0;

    for(int i=0; i<6; i++){
        if(a[i]<a[smallest]){
            smallest = i;
        }
        if(a[i]>a[largest]){
            largest = i;
        }
    }
    
    cout<<"index value of smallest number is : "<<smallest<<endl;
    cout<<"index value of largest number is : "<<largest;
    return 0; 
}


// int main() {
//     // Define an array of size 6
//     int arr[6] = {10, 25, 3, 42, 18, 7};

//     // Initialize variables for indices
//     int minIndex = 0; // Assume the first element is the smallest
//     int maxIndex = 0; // Assume the first element is the largest

//     // Traverse the array to find indices of smallest and largest elements
//     for (int i = 1; i < 6; i++) {
//         if (arr[i] < arr[minIndex]) {
//             minIndex = i; // Update minIndex if a smaller element is found
//         }
//         if (arr[i] > arr[maxIndex]) {
//             maxIndex = i; // Update maxIndex if a larger element is found
//         }
//     }

//     // Output the results
//     cout << "Smallest number is " << arr[minIndex] << " at index " << minIndex << endl;
//     cout << "Largest number is " << arr[maxIndex] << " at index " << maxIndex << endl;

//     return 0;
// }
