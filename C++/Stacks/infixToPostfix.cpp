#include<iostream>
#include<stack>
using namespace std;


int precedence(char o)
{
    if(o == '^')
    {
        return 3;
    }
    else if(o == '*' || o == '/')
    {
        return 2;
    }
    else if(o == '+' || o == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void inToPo(string n)
{
    int l = n.length();

    stack<char> s;
    string r="";
    for(int i=0; i<l; i++)
    {
        if(n[i] == '(')
        {
            s.push(n[i]);
        }
        else if(n[i] == ')')
        {
            while(s.top() != '(')
            {
                r += s.top();
                s.pop();
            }
            s.pop();
        }
        else if(n[i] >= 'a' && n[i] <= 'z' || n[i] >= 'A' && n[i] <= 'Z' || n[i] >= '0' && n[i] <= '9')
        {
            r+=n[i];
        }
        else
        {
            while(!s.empty() && precedence(n[i])<=precedence(s.top()))
            {
                r+=s.top();
                s.pop();
            }
            s.push(n[i]);
        }
    }

    while(!s.empty())
    {
        r+=s.top();
        s.pop();
    }

    cout<<r<<"\n";
}

int main()
{
    string n;

    cout<<"Enter infix: \n";
    cin>>n;

    inToPo(n);

    return 0;
}
