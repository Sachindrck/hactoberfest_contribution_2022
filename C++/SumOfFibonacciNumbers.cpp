// Program for Sum of Fibonacci Numbers
#include <iostream>

using namespace std;

int main()
{
    int n;
    int a=0,b=1,sum=1;
    int c=a+b;
    cout<<"Enter the number for the sum of fibonacci series : ";
    cin>>n;
    if(n==0){
        cout<<"The sum of "<<n<<" fibonacci numbers is: "<<0;
    }
    else if(n==2){
        cout<<"The sum of "<<n<<" fibonacci numbers is: "<<2;
    }
    else{
        for(int i=0;i<n-1;i++){         //Loop run for n-1 times
            sum+=c;
            a=b;               
            b=c;
            c=a+b;
        }
        cout<<"The sum of "<<n<<" fibonacci numbers is: "<<sum;
    }    
    

    return 0;
}
