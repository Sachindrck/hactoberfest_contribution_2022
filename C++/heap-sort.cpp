#include <iostream>
using namespace std;
class heap{
  public:
  int size;
  int capacity;
  int *arr;
  heap(int c){
      size=c;
      capacity=c;
      arr=new int[c];
  }
  void minheapify(int i){
      int l=(2*i)+1;
      int r=(2*i)+2;
      int smallest=i;
      if(l<size && arr[l]<arr[i]) smallest=l;
      if(r<size && arr[r]<arr[smallest]) smallest=r;
      if(smallest!=i){
          swap(arr[smallest],arr[i]);
          minheapify(smallest);
      }
  }
  int extractmin(){
      if(size<=0) return -1;
      if(size==1){
          return arr[0];
          size--;
      }
      int root=arr[0];
      arr[0]=arr[size-1];
      size--;
      minheapify(0);
      return root;
  }
  void getunsortedarr(){
      for(int i=0;i<capacity;i++){
            cin>>arr[i];
}
  }
void   heapsort(){
      int temp[capacity];
      for(int i=0;i<capacity;i++){
          temp[i]=extractmin();
          cout<<temp[i]<<" ";
      }
  }
};
int main() {
int c;
cin>>c;
heap h(c);
h.getunsortedarr();

for(int j=(c/2)-1;j>=0;j--){
    h.minheapify(j);
}
h.heapsort();
	return 0;
}
