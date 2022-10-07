
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> subarraySum(int arr[], int n, int s)
    {

        vector<int> v;
        int i = 0, j = 0;
        int st = -1, en = -1;
        int sum = 0;
        while (sum + arr[j] < s && j < n)
        {
            sum += arr[j];
            j++;
        }

        if (sum == s)
        {
            v.push_back(i + 1);
            v.push_back(j);
            return v;
        }
        else
        {
            while (j < n)
            {
                sum += arr[j];
                while (sum > s)
                {
                    sum -= arr[i];
                    i++;
                }
                if (sum == s)
                {
                    v.push_back(i + 1);
                    v.push_back(j + 1);
                    return v;
                }
                j++;
            }
            if (v.empty())
            {
                v.push_back(-1);
                return v;
            }
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}