#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.size() > t.size())
            return false;
        else if (s.size() == 0)
            return true;

        int l = 0;
        int r = 0;

        while (l < s.size() && r < t.size())
        {
            if (s[l] == t[r])
            {
                l++;
            }
            r++;
        }
        return l == s.size();
    }
};

int main()
{
    string s = "Llo";
    string t = "Hello";
    Solution s1;

    cout << s1.isSubsequence(s, t) << endl;

    return 0;
}