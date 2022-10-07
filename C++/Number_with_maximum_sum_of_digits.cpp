#include<iostream>
using namespace std;
class Calculation 
{
    protected:
    int n,i,num,sum,ma,index;
    public:
    void get_num();
};
void Calculation::get_num()
{
    cout<<"\n Enter No. of Elements  : ";
    cin>>n;
    int arr1[n], arr2[n];
    for(i=0; i<n; i++)
    {
        cout<<"\n Enter "<< i+1 <<" No. : ";
        cin>>arr1[i];
    }   
    for(i=0; i<n; i++)
    {
        sum = 0;
        num = arr1[i];
        while(num != 0)
        {
            sum += num%10;
            num/=10;
        }
        arr2[i] = sum;    
    }
    ma=arr2[0];
    for(i=0;i<n;i++)
    {
        if(ma<arr2[i])
        {
            ma=arr2[i];
            index=arr1[i];
        }
    }
    cout<<"\n Largest Sum is "<<ma<<" of the number : "<<index;
}
int main()
{
    Calculation C;
    C.get_num();
}