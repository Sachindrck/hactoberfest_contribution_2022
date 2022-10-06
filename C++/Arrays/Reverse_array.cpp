#include<iostream>
using namespace std;

int main()
{
   int a,b,i,j,size;

   cout<<"Enter array size: ";
    cin>>size;

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

  cout<<"\nThe Array is :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

   cout<<"\nReverse of Array is :\n";

   for(i=size-1,j=0; i>=0;i--,j++)
   {
    b[i]=a[j];
   }

   for(i=0;i<size;i++)
  {
  cout<<" "<<b[i]<<" ";
  }

  cout<<"\n";

  return 0;
  }
