// Given a very large number num (1 <= num <= 10^1000), print the number of digits that needs to be removed to make the number exactly divisible by 3. If it is not possible then print -1.

// Input: num = "1234"
// Output: 1
// Explanation: we need to remove one
// digit that is 1 or 4, to make the
// number divisible by 3.on

// Input: num = "11"
// Output: -1
// Explanation: It is not possible to
// remove any digits and make it divisible
// by 3.

#include <iostream>
using namespace std;

int Sum(string n) {
   int len = n.length(), sum = 0;
   for (int i = 0; i < len; i++) {
      sum += (int)n[i];
   }
   return sum;
}
int Count(string num) {
   int n = num.length();
   int sum = Sum(num);
   if (sum % 3 == 0) {
      return 0;
   }
   if (n == 1) {
      return -1;
   }
   for (int i = 0; i < n; i++) {
      int currDigit = num[i] - '0';
      if (sum % 3 == currDigit % 3) {
         return 1;
      }
   }
   if (n == 2) {
      return -1;
   }
   return 2;
}
int main() {
   string num;
   cout << "Enter the number: ";
   cin >> num;
   cout << Count(num) << endl;
   return 0;
}