//
// Created by illumwang on 23-11-23.
//
#include "func.h"

/**
* 给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
*/
ListNode* reverseList(ListNode* head) {
    ListNode* tmp=head;
    ListNode* cur=head;
    ListNode* pre= nullptr;
    while (cur){
        tmp=cur->next;
        cur->next=pre;
        pre=cur;
        cur=tmp;
    }
    return pre;
}