//
// Created by illumwang on 23-11-20.
//
#include <iostream>
#include "func.h"
int main(){
    MyLinkedList myLinkedList;
    myLinkedList.addAtHead(1);
    myLinkedList.addAtTail(3);
    myLinkedList.addAtIndex(1, 2);

    std::cout << myLinkedList.get(1) << std::endl; // 输出 2

    myLinkedList.deleteAtIndex(1);

    std::cout << myLinkedList.get(1) << std::endl; // 输出 3

    return 0;
}