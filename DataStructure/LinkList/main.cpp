//
// Created by illumwang on 23-11-20.
//
#include <iostream>
#include "func.h"
int main(){
//    MyLinkedList myLinkedList;
//    myLinkedList.addAtHead(1);
//    myLinkedList.addAtTail(3);
//    myLinkedList.addAtIndex(1, 2);
//
//    std::cout << myLinkedList.get(1) << std::endl; // 输出 2
//
//    myLinkedList.deleteAtIndex(1);
//
//    std::cout << myLinkedList.get(1) << std::endl; // 输出 3

    ListNode* list= CreateLinkList({1,2,3,4});
//    ListNode* res= removeNthFromEnd(list,2);
//    ListNode* res=reverseList(list);
    ListNode* res= swapPairs(list);
    ListNode* A= CreateLinkList({4,1,8,4,5});
    ListNode* B= CreateLinkList({5,0,1,8,4,5});
    ListNode* swap= getIntersectionNode(A,B);
    PrintElements(swap);
    return 0;
}