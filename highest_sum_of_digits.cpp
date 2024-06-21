#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
 int n;
 cout << "Enter the value of n::";
 cin >> n;
 int arr[n], sum[n];

 cout << "Enter " << n << " numbers::";
 for(int i=0;i<n;i++)
    cin >> arr[i];

//calculating the sum.
int s,temp;
for (int i=0;i<n;i++){
        s = 0;
        temp = arr[i];

     while(temp!=0){

        s += temp%10;
        temp /= 10;


     }  
       sum[i] = s;

}

sort(arr,arr+n,greater<int>());

cout << "Highest sum of digits among n numbers = " << arr[temp] << endl;

    return 0;
}
