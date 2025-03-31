#include<iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};

int main(){
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    Solution s1;
    s1.merge(nums1,3,nums2,3);

    cout<<nums1.size()<<endl;
    for(int i=0;i<nums1.size();i++)
        cout<<nums1[i]<<" ";
    return 0;
}