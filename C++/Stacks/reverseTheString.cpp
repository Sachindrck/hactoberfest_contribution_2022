#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;

    string n;

    cout<<"Enter string:\n";
    cin>>n;

    for(int i=0; i<n.length();i++)
    {
        s.push(n[i]);
    }

    cout<<"Reversed string is:\n";
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<"\n";

    return 0;
}
