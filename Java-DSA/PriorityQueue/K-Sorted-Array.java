import java.io.*;
import java.util.*;

public class Main {

   public static void main(String[] args) throws Exception {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      int n = Integer.parseInt(br.readLine());
      int[] arr = new int[n];

      for (int i = 0; i < n; i++) {
         arr[i] = Integer.parseInt(br.readLine());
      }

      int k = Integer.parseInt(br.readLine());

      PriorityQueue<Integer> pq = new PriorityQueue<>();
      for(int i = 0; i<=k; i++){
         pq.add(arr[i]);
      }
      int idx = 0;
      for(int i = k+1; i<n; i++){
         arr[idx++] = pq.poll();
         pq.add(arr[i]);
      }
      while(!pq.isEmpty()){
         arr[idx++] = pq.poll();
      }

      for(int ele : arr){
         System.out.println(ele);
      }
   }
}
