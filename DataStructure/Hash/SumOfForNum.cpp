//
// Created by illumwang on 12/3/23.
//
#include <unordered_map>
#include "vector"
/**
 * 给你四个整数数组 nums1、nums2、nums3 和 nums4 ，数组长度都是 n ，
 * 请你计算有多少个元组 (i, j, k, l) 能满足：
0 <= i, j, k, l < n
nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
示例 1：
输入：nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
输出：2
解释：
两个元组如下：
1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0
 */
using namespace std;
int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
   unordered_map<int,int> map;
   int count=0;
    for (int i:nums1) {
        for (int j:nums2) {
            map[i+j]++;
        }
    }
    for (int k:nums3) {
        for (int l:nums4) {
            if (map.find(0-(k+l))!=map.end()){
                count+=map[0-(k+l)];

            }
        }
    }
    return count;
}