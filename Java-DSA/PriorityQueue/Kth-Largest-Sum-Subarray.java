public class Main {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for(int i = 0; i<n; i++)
            arr.add(sc.nextInt());
        int ans = getKthLargest(arr, k);
        System.out.println(ans); 
    }

    public static int getKthLargest(ArrayList<Integer> arr, int k) {
        int[] sum = new int[arr.size()+1];
        sum[0] = 0;
        sum[1] = arr.get(0);
        int  n = arr.size();
        for(int i = 2; i<=n; i++)
            sum[i] = sum[i-1] + arr.get(i-1);

        PriorityQueue<Integer> pq = new PriorityQueue<>();

        for(int i = 1; i<=n; i++){
            for(int j = i; j<=n; j++){
                int sub = sum[j] - sum[i-1];

                if(pq.size()<k){
                    pq.add(sub);
                }
                else{
                    if(pq.peek()<sub){
                        pq.poll();
                        pq.add(sub);
                    }
                }
            }
        }
        return pq.poll();
    }
}
