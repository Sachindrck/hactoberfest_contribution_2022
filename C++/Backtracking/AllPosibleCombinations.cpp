// c++ program to print all the combinations of balanced
// parenthesis

#include <bits/stdc++.h>
using namespace std;
vector<string> generateParenthesis(int n)
{
    vector<string> two;
    vector<string> ans;
    if (n == 1)
    {
        two.push_back("{}");
        return two;
    }
    if (n == 2)
    {
        two.push_back("{{}}");
        two.push_back("{}{}");
        return two;
    }

    two = generateParenthesis(
        n - 1);
    for (int i = 0; i < two.size(); i++)
    {
        string buf = "{", bug = "{", bus = "{";
        buf = buf + two[i] + "}";
        bug = bug + "}" + two[i];
        bus = two[i] + bus + "}";
        ans.push_back(buf);
        ans.push_back(bus);
        ans.push_back(bug);
    }

    ans.pop_back();

    return ans;
}
int main()
{
    vector<string>
        ff;
    int n = 2;
    ff = generateParenthesis(n);

    for (int i = 0; i < ff.size(); ++i)
    {
        cout << ff[i] << endl;
        /* code */
    }
}
