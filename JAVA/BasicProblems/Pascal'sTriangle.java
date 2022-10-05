//Author's name : Priyanshi Rai
//modification date : 5-10-2022


//This is program to create Pascal's Triangle using java

//In Pascal's triangle,each new number lies between two numbers and below them, and its value is the sum of the two numbers above it.

/*
INPUT : n=3
OUTPUT: 
   1
  1 1
 1 2 1
1 3 3 1
*/



public class PascalsTriangle {
   static int factorial(int n) {
      int f;

      for(f = 1; n > 1; n--){
         f *= n;
      }
      return f;
   }
   static int ncr(int n,int r) {
      return factorial(n) / ( factorial(n-r) * factorial(r) );
   }
   public static void main(String args[]){
      System.out.println();
      int n, i, j;
      n = 5;

      for(i = 0; i <= n; i++) {
         for(j = 0; j <= n-i; j++){
            System.out.print(" ");
         }
         for(j = 0; j <= i; j++){
            System.out.print(" "+ncr(i, j));
         }
         System.out.println();
      }
   }
}
