#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *input, int size)
{
    for(int i=1;i<size;i++){
        int num=input[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(num<input[j]){
                input[j+1]=input[j];
            }
            else{
                break;
            }
        }
        input[j+1]=num;
    }
        
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int *input = new int[size];

        for(int i-0; i<size; i++){
            cin>>input[i];
        }

        insertionSort(input, size);

        for(int i=0; i<size; i++){
            cout<<input[i]<<" ";
        }
        
        delete[] input;
        cout<<endl;
    }
    return 0;
}