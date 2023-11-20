//
// Created by illumwang on 23-11-20.
//

#ifndef CPLUSLEARNING_FUNC_H
#define CPLUSLEARNING_FUNC_H
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){}
};
//创建链表
ListNode* CreateLinkList(std::initializer_list<int> values);
ListNode* removeNthFromEnd(ListNode* head, int n);
//移除元素
ListNode* removeElements(ListNode* head, int val);
ListNode *detectCycle(ListNode *head);
ListNode *createCircle(std::initializer_list<int> values);
#endif //CPLUSLEARNING_FUNC_H
