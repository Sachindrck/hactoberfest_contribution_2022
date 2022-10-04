/*

Input: size = 6, a = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

#include <bits/stdc++.h>
using namespace std;

#define fri(i,a,b) for(int i = a; i<=b; i++)
#define frd(i,a,b) for(int i = a; i>=b; i--)

void sort012(vector<int> &a, int n){
    int low = 0, mid = 0, high = a.size() - 1; // 0, 0, 5
    while (mid <= high) 
    {
        if (a[mid] == 0) // for 0
        {
            swap(a[mid++], a[low++]);
        }
        else if (a[mid] == 2) // for 2
        {
            swap(a[mid], a[high--]);
        }
        else // for 1
        { 
            mid++;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    fri(i,0,n-1){
        cin>>a[i];
    }
    sort012(a,n);
    fri(i,0,n-1){
        cout<<a[i]<<" ";
    }


    return 0;
}