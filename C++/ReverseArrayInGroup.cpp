/*
ip : 4 2 1 5 4     , k = 2;
op : 2 4 5 1 4

ip : 4 1 8 2 0 4 6     , k = 3;
op : 8 1 4 4 0 2 6

*/


#include <bits/stdc++.h>
using namespace std;

#define fri(i,a,b) for(int i = a; i<=b; i++)
#define frd(i,a,b) for(int i = a; i>=b; i--)

void reverseGroup(vector<int> &a, int n, int k){
    int l = 0, r = min(k, n);
    while(l<=n){ //till l is less than n
        reverse(a.begin() + l, a.begin() + r); //reverse the array from l to r
        l += k;
        r = min(n, r + k);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    fri(i,0,n-1)
        cin>>a[i];
    int k;
    cin>>k;
    reverseGroup(a,n,k);

    fri(i, 0, n - 1)
        cout << a[i]<<" ";

    return 0;
}