// Simple CPP program to find first non-
// repeating element.
#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(int arr[], int n)
{
	// Loop for checking each element
	for (int i = 0; i < n; i++) {
		int j;
		// Checking if ith element is present in array
		for (j = 0; j < n; j++)
			if (i != j && arr[i] == arr[j])
				break;
		// if ith element is not present in array
		// except at ith index then return element
		if (j == n)
			return arr[i];
	}
	return -1;
}

// Driver code
int main()
{
	int arr[] = { 9, 4, 9, 6, 7, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << firstNonRepeating(arr, n);
	return 0;
}
