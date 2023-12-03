//
// Created by illumwang on 23-11-24.
//
#include <ios>
#include <iostream>
#include <map>
#include "stdio.h"
#include "string"
#include "funcAndStruct.h"
int main(){
//    std::string s="car";
//    std::string t="cat";
//    bool res=isAnagram(s,t);
//    std::cout<<std::boolalpha<<"Result is:"<<res<<std::endl;
    int n=19;
    bool f= isHappy(n);
    std::cout<<std::boolalpha<<"Result is:"<<f<<std::endl;

        std::map<int, int> myMap;

        // 假设有一系列数字
        int numbers[] = {1, 2, 3, 2, 1, 3, 4, 5, 4, 5, 5};

        for (int i : numbers) {
            myMap[i]++;
        }

        // 输出每个数字及其出现的次数
        for (const auto& pair : myMap) {
            std::cout << "Number: " << pair.first << ", Count: " << pair.second << std::endl;
        }

        return 0;


}