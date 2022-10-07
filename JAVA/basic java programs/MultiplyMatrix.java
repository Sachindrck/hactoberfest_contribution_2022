//multiplying two matrices
import java.util.*;
class MultiplyMatrix{
public static void main(String args[]){
int [][]arr1={{1,2,3},{4,5,6},{7,8,9}};
int [][]arr2={{1,1,2},{4,3,2},{5,6,7}};
int [][]arr3=new int[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
arr3[i][j]=0;
for(int k=0;k<3;k++){
arr3[i][j]+=arr1[i][k]*arr2[k][j];
}
}

}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
System.out.println(arr3[i][j]);

}
}
}

}