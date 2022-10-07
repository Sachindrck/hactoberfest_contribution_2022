/* 
displaying following pattern
       1
      222
     33333  
*/
import java.util.*;
class Pattern{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int rows=sc.nextInt();
for(int i=1;i<=rows;i++){
for(int space=1;space<=rows-i;space++){
System.out.print(" ");
}
if(i==1){
System.out.print(" "+1+" ");}
else{
for(int j=0;j<=i;j++){
System.out.print(i+" ");


}}
System.out.println();

}
}}