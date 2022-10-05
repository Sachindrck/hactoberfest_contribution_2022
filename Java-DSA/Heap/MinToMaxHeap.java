public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long[] arr = new long[n];
        minHeapToMaxHeap(arr);
        for(long x : arr)
            System.out.print(x+" ");
    }
    public static void minHeapToMaxHeap(long[] arr) {
        for(int i = (arr.length - 2)/2; i>=0; i--){
            heapify(arr, arr.length, i);
        }
    }
    
    public static void heapify(long[] arr, int n, int i){
        int max = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left<n && arr[left] > arr[max])
            max = left;
        if(right<n && arr[right] > arr[max])
            max = right;
        
        if(max!=i){
            long temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
            
            heapify(arr, n, max);
        }
    }
}
