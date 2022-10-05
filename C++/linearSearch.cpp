#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int e)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == e)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n, e;

    cout<<"Enter size of array:\n";
    cin>>n;

    int a[n];
    cout<<"Enter elements in array:\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter element to be found: \n";
    cin>>e;

    int found = linearSearch(a, n, e);

    if(found == -1)
    {
        cout<<"Element not found!\n";
    }
    else
    {
        cout<<"Element found at position: "<<found<<"\n";
    }
}