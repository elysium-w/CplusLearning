//
// Created by illumwang on 11/30/23.
//
/**
* 给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。



示例 1：

输入：nums1 = [1,2,2,1], nums2 = [2,2]
输出：[2]
示例 2：

输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出：[9,4]
解释：[4,9] 也是可通过的

*/
#include <unordered_set>
#include "vector"

using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> result_set;
    unordered_set<int> nums_set(nums1.begin(),nums1.end());
    for (int n:nums2) {
        if (nums_set.find(n)!=nums_set.end()){
            result_set.insert(n);
        }
    }
    return vector<int>(result_set.begin(),result_set.end());
}