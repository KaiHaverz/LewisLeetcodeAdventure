#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

/*
思路:
1. 先预处理字符串
先去掉空格,标点,所有的字符转为小写
2. 双指针法
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {
            //跳过非字符的元素
            while(left < right && !isalnum(s[left])){
                left++;
            }

            while(left < right && !isalnum(s[right])){
                right--;
            }

            //比较字符,忽略大小写
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};

int main(){
    string s = "chengdu yongyuan de hong";
    Solution sol;
    bool res = sol.isPalindrome(s);
    cout << res << endl;
    return 0;
}