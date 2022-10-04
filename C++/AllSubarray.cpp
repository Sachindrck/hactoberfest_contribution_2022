//all subarray element of an array
#include <bits/stdc++.h>
using namespace std;

#define fri(i, a, b) for (int i = a; i <= b; i++)
#define frd(i, a, b) for (int i = a; i >= b; i--)

void subarray(vector<int> a, int s, int e)
{
    if (e == a.size()) // base case
        return;
    else if (e < s) // recursive case
        subarray(a, 0, e + 1); // start from 0 till end + 1
    else
    {
        for (int i = s; i <= e; i++) // print the subarray
            cout << a[i] << " ";
        cout << endl;
        subarray(a, s + 1, e); // start from s + 1 till end
        
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    fri(i, 0, n - 1)
    {
        cin >> a[i];
    }

    subarray(a, 0, 0);

    return 0;
}