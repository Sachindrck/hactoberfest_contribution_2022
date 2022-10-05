#include <bits/stdc++.h>

using namespace std;
bool palindrom_check(string str)
{
    int i=0;
    int j=str.length()-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    cout<<"please enter string"<<endl;
    string str;
    cin>>str;
    cout<<palindrom_check(str)<<endl;

    return 0;
}
