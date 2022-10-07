
public class complex                           //class creation
{
    double real,img;                           //Data members
    public complex()                           //Default constructor
    {               
        real=0;
        img=0;
    }
    complex(double r, double i)                //Parameterized constructor
    {
        real = r;
        img = i;
    }
    complex add(complex n1, complex n2)        //Addition function
    {
        complex temp =new complex(0, 0);
        temp.real = n1.real + n2.real;
        temp.img = n1.img + n2.img;
        return temp;
    }
    complex subtract(complex n1,complex n2)    //Subtraction function
    {

        complex mul = new complex(0, 0);
        mul.real = n1.real - n2.real;
        mul.img = n1.img - n2.img;
        return mul;
    }
    complex multiply(complex n1, complex n2)   //Multiplication function
    {
        complex sub = new complex(0, 0);
        sub.real = (n1.real*n2.real)-(n1.img*n2.img);
        sub.img = (n1.real*n2.img)+(n1.img*n2.real);
        return sub;
    }
    complex div(complex n1,complex n2)         //Division function
    {
        complex div = new complex(0, 0);
        div.real = ((n1.real*n2.real)+(n1.img*n2.img))/(n1.real*n1.real)+(n1.img*n1.img);
        div.img = ((n1.img*n2.real)-(n1.real*n2.img))/(n1.real*n1.real)+(n1.img*n1.img);
        return div;
    }
    void show(complex resultant)               //Printing function
    {
        String sign;
        sign = Sign_Check(resultant);

        if(resultant.img == 0){
            System.out.println(resultant.real);
        }
        else if (resultant.real == 0)
        {
            System.out.println(resultant.img +"i");
        }
        else
        {
            System.out.println(resultant.real + sign + resultant.img +"i");
        }
    }

    private String Sign_Check(complex result)  //Sign check function
    {
        String sign = "";
        if(result.img >0)
        {
            sign = "+";
        }
        return sign;
    }
}