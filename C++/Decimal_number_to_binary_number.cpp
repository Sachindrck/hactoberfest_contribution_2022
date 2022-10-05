#include <iostream>
using namespace std;
 
class Box {
   int n,binaryNumber;
   public:
      friend void DecimalToBinary( Box box );
};
void DecimalToBinary( Box box ) {
    cout<<"\nEnter the decimal number : ";cin>>box.n;
    cout<<"\nThe Binary number : "<<endl;
    while (box.n > 0) {
      box.binaryNumber = box.n % 2;
      box.n = box.n / 2;
      cout<<box.binaryNumber<<"";
    }
}
int main() {
   Box box;
   DecimalToBinary(box);
   return 0;
}
/* Output:
Enter the decimal number : 15

The Binary number : 
1111
Explanation:
1    1    1    1
2^0  2^1  2^2  2^3
=>2^0+2^1+2^2+2^3=15
*/