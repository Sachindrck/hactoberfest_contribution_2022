#include <bits/stdc++.h>
using namespace std;
string compress(string s)
{
    if (s.size() == 0)
    {
        return "";
    }
    char ch = s[0];
    int i = 1;
    while (i < s.size() && s[i] == ch)
    {
        i++;
    }
    string ros = s.substr(i);
    ros = compress(ros);

    string charCount = to_string(i);
    return ch + charCount + ros;
}
int main()
{
    string s;
    cin >> s;

    cout << compress(s) << endl;

    return 0;
}
