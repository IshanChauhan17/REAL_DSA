#include <iostream>

using namespace std;

int main(){
    
    int a[] = {3,-4,5,4,-1,7,-8};
    int n = 7 ;

    int maxSum = INT16_MIN;
    for(int st= 0 ; st<n; st++){
        int sum = 0;
        for(int end = st; end<n; end++){
            sum += a[end];
            maxSum = max(sum, maxSum);
        }
    }
    cout<<maxSum;
    return 0;
}