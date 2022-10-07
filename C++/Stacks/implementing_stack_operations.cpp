#include<iostream>

using namespace std;
#define MAX_SIZE 5
class stack
{
    int i, top, arr[MAX_SIZE], a;
    char choice;

public:
    stack()
    {
        a = -1;
        top = 0;
        choice = 'y';
    }
    void push();
    void pop();
    void display();
};
void stack::push()
{
    while (1)
    {
        cout << "enter the element to be inserted";
        cin >> arr[top];
        cout << "Do you want to insert more elements;Enter Y or N";
        cin >> choice;
        top++;
        if(top==MAX_SIZE)
        {cout<<"stack is full\n";
        break;}
        if (choice == 'n' || choice == 'N')
            break;
    }
}
void stack::pop()
{  if(top==0)
cout<<"the stack is empty\n";
    --top;
    a = arr[top];
    
    cout << "The element deleted from the stack is:" << a<<endl;
}
void stack::display()
{ cout << "Elements in the stack are:" << endl;
    for (int i = 0; i < top; i++)
    {
        
        cout << arr[i] << endl;
    }
}
int main()
{
    int choice;
    stack s;
    while (1)
    {
        cout << "Enter \n1-push\n2-pop\n3-display\n4-Quit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.push();

            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:exit(0);
            break;
        default:
            cout << "Invalid choice";
            break;
        }
    }
}