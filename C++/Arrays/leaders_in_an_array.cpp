// Write a program to print all the LEADERS in the array. An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 
// Input: arr[] = {16, 17, 4, 3, 5, 2}, 
// Output: 17, 5, 2

// Input: arr[] = {1, 2, 3, 4, 5, 2}, 
// Output: 5, 2 

//Naive Approach: O(N^2) 
// Using two loops, the outer loop will pick each element and the inner loop will compare with every element present to its right side.

// Efficient Approach: O(n)
// Start from last making the last element as current leader and keep updating the value of current leader
#include<iostream>
using namespace std;
void leader(int arr[],int n)
{
    int curr_leader=arr[n-1]; // last element is always the leader
    cout<<curr_leader<<" ";
    for(int i=n-1;i>=0;i--)
    {
        if(curr_leader<arr[i])
        {
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
}
int main()
{
    int n=6;
    int arr[n]={16,17,4,3,5,2};
    leader(arr,n);
    return 0;
}

// OUTPUT: 2 5 17