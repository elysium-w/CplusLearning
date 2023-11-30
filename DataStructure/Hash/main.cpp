//
// Created by illumwang on 23-11-24.
//
#include <ios>
#include <iostream>
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
}