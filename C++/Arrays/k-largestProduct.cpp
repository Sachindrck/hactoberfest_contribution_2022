
#include <bits/stdc++.h>
using namespace std;


int findMaxProduct(int arr[], int n, int k)
{
	
	int MaxProduct = 1;
	for (int i=0; i<k; i++)
		MaxProduct *= arr[i];

	int prev_product = MaxProduct;


	for (int i=1; i<=n-k; i++)
	{
		int curr_product = (prev_product/arr[i-1]) *
							arr[i+k-1];
		MaxProduct = max(MaxProduct, curr_product);
		prev_product = curr_product;
	}

	
	return MaxProduct;
}


int main()
{
	int arr1[] = {1, 5, 9, 8, 2, 4, 1, 8, 1, 2};
	int k = 6;
	int n = sizeof(arr1)/sizeof(arr1[0]);
	cout << findMaxProduct(arr1, n, k) << endl;

	k = 4;
	cout << findMaxProduct(arr1, n, k) << endl;

	int arr2[] = {2, 5, 8, 1, 1, 3};
	k = 3;
	n = sizeof(arr2)/sizeof(arr2[0]);
	cout << findMaxProduct(arr2, n, k);

	return 0;
}
