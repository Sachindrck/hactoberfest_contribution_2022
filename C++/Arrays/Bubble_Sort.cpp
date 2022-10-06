#include <iostream>
using namespace std;

void bubbleSort(int *arr,int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
    }
}


int main(){
    int arr[]={3 ,3,1,6,4,2,5};

    bubbleSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
}
