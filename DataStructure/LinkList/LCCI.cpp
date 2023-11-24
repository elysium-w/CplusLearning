//
// Created by illumwang on 23-11-24.
//
/**
 * 给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。
 * 如果两个链表没有交点，返回 null 。
 */
/**
 * 交点不是数值相等，而是指针相等。
 */
#include <unordered_set>

#include "func.h"

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* a=headA;
    ListNode* b=headB;
    int lenA=0,lenB=0;
    while (a!= nullptr){
        lenA++;
        a=a->next;
    }
    while (b!= nullptr){
        lenB++;
        b=b->next;
    }
    a=headA;
    b=headB;
    if (lenA<lenB){
        std::swap(lenA,lenB);
        std::swap(a,b);
    }
    int gap=lenA-lenB;
    while (gap--){
        a=a->next;
    }
    while (a!= nullptr){
        if (a==b){
            return a;
        }
        a=a->next;
        b=b->next;
    }
    return NULL;
}