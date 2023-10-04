// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int Bsearch(int A[],int len)
{
    int K;
    cin>>K;
    int low=0;
    int high=len-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
    if(K==A[mid])
    {
        return mid;
    }
    else if(K<A[mid])
    {
        high=mid-1;
        
    }
    else
    {
        low=mid+1;
    }
       
    }
    return -1;
 
}
int main() {
    // Write C++ code here
    cout << "Binary search" << endl;
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = 10;
    int result = Bsearch(A, len); // Store the result of the binary search
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}