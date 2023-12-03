//
// Created by illumwang on 12/3/23.
//
#include "string"

using namespace std;
/*
 * 给你两个字符串：ransomNote 和 magazine ，判断 ransomNote 能不能由 magazine 里面的字符构成。
如果可以，返回 true ；否则返回 false 。
magazine 中的每个字符只能在 ransomNote 中使用一次。
示例 1：
输入：ransomNote = "a", magazine = "b"
输出：false
示例 2：
输入：ransomNote = "aa", magazine = "ab"
输出：false
示例 3：
输入：ransomNote = "aa", magazine = "aab"
输出：true

 */
bool canConstruct(string ransomNote, string magazine) {
    int record[26]={};
    if (ransomNote.size()>magazine.size()){
        return false;
    }
    for (int i = 0; i < magazine.size(); ++i) {
        record[magazine[i]-'a']++;
    }
    for (int j = 0; j < ransomNote.length(); ++j) {
        record[ransomNote[j]-'a']--;
    }
    for (int i:record) {
        if (i<0){
            return false;
        }
    }
    return true;
}