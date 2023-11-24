//
// Created by illumwang on 23-11-24.
//
#include "func.h"

/**
* 给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。
 *
*/
ListNode* swapPairs(ListNode* head) {
    ListNode* pre=new ListNode(0);
    pre->next=head;
    ListNode* cur=pre;
    while (cur->next!= nullptr&&cur->next->next!= nullptr){
        ListNode* tmp=cur->next;
        ListNode* tmp1=cur->next->next->next;
        cur->next=cur->next->next;
        cur->next->next=tmp;
        cur->next->next->next=tmp1;
        cur=cur->next->next;
    }
    return pre->next;
}