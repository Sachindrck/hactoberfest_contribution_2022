// code to find longest incresing subsequence
#include <iostream>
using namespace std;


int longestSubSeq(int subArr[], int n) {
   int length[n] = { 0 }; //set all length to 0
   length[0] = 1;    //subsequence ending with subArr[0] is 1
   for (int i = 1; i < n; i++) {     //ignore first character, second to all
      for (int j = 0; j < i; j++) {      //subsequence ends with subArr[j]
         if (subArr[j] < subArr[i] && length[j] > length[i])
            length[i] = length[j];
      }
      length[i]++;  //add arr[i]
   }
   int least = 0;
   for (int i = 0; i<n; i++)  // find longest increasing subsequence
      least = max(least, length[i]);
   return least;
}
int main() {
   int n ; // length of the array
   cin>>n;
   int array[n];
   for (int i=0; i<n ; i++){
   	cin>>array[i];
   }
   cout << "Length of Longest Increasing Subsequence is: " << longestSubSeq(array, n);
   return 0;
}