/*displaying following pattern
     1
    212
   32123  
 */
import java.util.*;
class PatternNew{
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
int count=i;
for(int j=1;j<=i;j++){
System.out.print(count+" ");
count=count-1;}
count=1;
for(int j=1;j<=i-1;j++){
count+=1;
System.out.print(count+" ");
}


}
System.out.println();

}
}}