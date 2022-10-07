#include<bits/stdc++.h>
using namespace std;

void reverseArrayNaiveApproach(int *arr, int n)
{
    // using naive approach
    // first creating another array and storing the reverse of given array in it

    int ansArr[n];
  
    for(int i = 0; i < n; i++)
        ansArr[i] = arr[n-i-1];

    for(int i = 0; i < n; i++)
        cout << ansArr[i] << " ";

    // time complexity --> O(n)
    // auxiliay space --> O(n)
}

void reverseArrayEfficientApproach(int *arr, int n)
{
    // using efficient approach
  
    for(int i = 0; i < n/2; i++)
        swap(arr[i], arr[n-i-1]);
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // time complexity --> O(n)
    // auxiliary space --> O(1)
}

int main()
{
    int n;                            // number of elements
    cin >> n;                         // taking input of number of elements

    int *arr = new int[n];            // dynamic allocation of array on heap
    for(int i = 0; i < n; i++)
        cin >> arr[i];                // taking input of array

    reverseArrayNaiveApproach(arr,n);

    reverseArrayEfficientApproach(arr, n);

    delete [] arr;                    // deallocating heap memory

    return 0;
}
