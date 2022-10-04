/*
N=8
arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output :
7  9  10  11  -5  -3  -4  -1

*/


#include <bits/stdc++.h>
using namespace std;

#define fri(i,a,b) for(int i = a; i<=b; i++)
#define frd(i,a,b) for(int i = a; i>=b; i--)

void negToEnd(int arr[] , int n){
    vector<int> neg, pos;
    int j = 0;
    fri(i,0,n-1){
        if(arr[i] < 0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    fri(i,0,n-1){
        if(i < pos.size()){
            arr[i] = pos[i];
        }
        else{
            arr[i] = neg[j];
            j++;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    fri(i,0,n-1){
        cin>>a[i];
    }
    negToEnd(a,n);
    fri(i,0,n-1){
        cout<<a[i]<<" ";
    }

    return 0;
}