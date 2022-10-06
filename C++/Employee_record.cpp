#include<iostream>
#include<string.h>
using namespace std;
class Employee{
public:
int eno;
char ename [100];
float salary;
public:
void accept_details (){
cout<<"\nEnter Employee Details";
cout<<"\n Enter Employee Id: ";
cin>>eno;
cout<<"\nEnter Employee Name: ";
cin>>ename;
cout<<" \nEnter Salary :";
cin>>salary;
}
int search (int empno);
int search (char *empname) ;
int search (float empsalary) ;
};
int Employee::search (int empno){
if (eno==empno){
    cout<<"Displaying Information\n"; 
    cout<<" \nEmployee Name :"<<ename;
    cout<<"\nSalary : "<<salary<<endl;
  }
return 0;
}

int Employee::search (char *empname){
if (strcmp(ename,empname)==0){
    cout<<"\nDisplaying Information\n";
    cout <<"Employee Id: "<<eno; 
    cout<<"\nSalary :"<<salary;
}
return 0;
}

int Employee::search (float empsalary) {
if (salary==empsalary) {
cout<<"\nDisplaying Information \n";
cout<<"\nEmployee Id : "<<eno;
cout<<"\nEmployee Name: "<<ename;
}
return 0;
}

int main()
{
    Employee *emp;
    int cnt,i ,max;
    char name [100];
    int eno;
    float sal;
    cout<<"\nEnter No. of EmpLoyee Details You Want : ";cin>>cnt;
    emp=new Employee[cnt];
    for(i=0;i<cnt; i++){
        emp[i].accept_details();
    }
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\nSearch Employee by Id:";
    cin>>eno;
    for (int i=0; i<cnt; i++){
        emp[i].search(eno);
    }
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<" \n\nSearch Employee by Name : ";
    cin>>name;
    for(i=0;i<cnt;i++){
        emp[i].search(name);
    }
    cout<<"\n\nSearch Employee by Salary : ";
    cin>>sal;
    for(i=0;i<cnt;i++) {
        emp[i].search(sal) ;
    }
    max=emp[0].salary;
    for(i=0; i<cnt; i++) {
        if (emp[i].salary>max){ 
            max=emp[1].salary;
        }
    }

    for (i=0;i<cnt; i++) {
        if (emp[i].salary==max) {
            cout<<"\nMaximum Salary of Employee Name is: "<<emp[i].ename; cout<<"\nAnd Salary is : "<<emp[i].salary;
        }
    }
    cout<<"\n-------------------------------------------------------------------------------------"<<endl;
    return 0;
}
/*
Enter No. of EmpLoyee Details You Want : 1

Enter Employee Details
 Enter Employee Id: 12

Enter Employee Name: name
 
Enter Salary :345
-------------------------------------------------------------------------------------


Search Employee by Id:12
Displaying Information

Employee Name :name
Salary : 345
-------------------------------------------------------------------------------------


Search Employee by Name : name

Displaying Information
Employee Id: 12
Salary :345

Search Employee by Salary : 345

Displaying Information

Employee Id : 12
Employee Name: name
Maximum Salary of Employee Name is: name
And Salary is : 345
-------------------------------------------------------------------------------------*/