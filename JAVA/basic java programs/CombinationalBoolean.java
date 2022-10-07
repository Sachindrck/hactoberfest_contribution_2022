//using combinational boolean operators
import java.util.*;
class CombinationalBoolean{
public static void main(String args[]){
boolean b1=true,b2=false,b3=true,b4=true,b5=true,b6=false,b7=true;
b1&=b2;
b2|=b3;
b6^=b4;
b7&=!b5;
System.out.println("b1="+b1+"and b2="+b2);
System.out.println("b6="+b6+"and b7="+b7);
}
}