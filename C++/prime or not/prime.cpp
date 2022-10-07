// C++ Program to Check Prime Number
#include <iostream>
using namespace std;
int main(){
    int num, c = 0;
    
    // Taking input from the user 
    cout << "Enter any positive integer: ";
    cin >> num;
    
    // Finding factors
    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            c++;
        }
    }
    
    // Checking for prime number
    if (c == 2){
        cout << num << " is a prime number." << endl;
    }
    else {
        cout << num << " is not a prime number." << endl; 
    }
    
    return 0;
}