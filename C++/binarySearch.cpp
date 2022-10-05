#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) 
    {
		int m = l + (r - l) / 2;

		if (arr[m] == x)
        {
            return m;
        }
		if (arr[m] < x)
        {
            l = m + 1;
        }
		else
        {
            r = m - 1;
        }
	}
	return -1;
}

int main(void)
{
	int n, x;

    cout<<"Enter size of array:\n";
    cin>>n;

    int a[n];

    cout<<"Enter elements in array:\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter element to be found:\n";
    cin>>x;

	int found = binarySearch(a, 0, n - 1, x);

    if(found == -1)
    {
        cout<<"Element not found!\n";
    }
    else
    {
        cout<<"Element found at position: "<<found+1<<"\n";
    }
	return 0;
}
