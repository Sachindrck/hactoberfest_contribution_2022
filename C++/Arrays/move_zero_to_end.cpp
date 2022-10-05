#include<iostream>
using namespace std;
void movesZeroToEnd(int arr[],int n){
    int temp[n];
    int var =0;
    for(int i =0;i<n;i++){
        if(arr[i]!=0){
        temp[var]=arr[i];
        var++;

        }
    }

    for(int i =var;i<n;i++){
        temp[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
        
    }
}
int main(){
    int arr[ ] = {1,3,0,7,5,0,6};
    movesZeroToEnd(arr,7);

return 0;
}