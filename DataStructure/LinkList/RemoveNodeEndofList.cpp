//
// Created by illumwang on 23-11-20.
//
//给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
#include "func.h"
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummyHead=new ListNode(0);
    dummyHead->next=head;
    ListNode* fast=dummyHead;
    ListNode* slow=dummyHead;
    while (n--&&fast!= nullptr){
        fast=fast->next;
    }
    fast=fast->next;
    while (fast!= nullptr){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return dummyHead->next;
}