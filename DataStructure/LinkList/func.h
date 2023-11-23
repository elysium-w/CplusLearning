//
// Created by illumwang on 23-11-20.
//

#ifndef CPLUSLEARNING_FUNC_H
#define CPLUSLEARNING_FUNC_H

#include <initializer_list>

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){}
};
//创建链表
ListNode* CreateLinkList(std::initializer_list<int> values);
//打印链表
void PrintElements(ListNode *head);
ListNode *detectCycle(ListNode *head);
ListNode *createCircle(std::initializer_list<int> values);
//移除元素
ListNode* removeElements(ListNode* head, int val);
ListNode* removeNthFromEnd(ListNode* head, int n);
//设计链表
class MyLinkedList{
public:
    MyLinkedList();
    int get(int index) ;
    void addAtHead(int val) ;
    void addAtTail(int val) ;
    void addAtIndex(int index, int val) ;
    void deleteAtIndex(int index) ;
private:
    ListNode *_header;
    int _size;
};
//reverse list
ListNode* reverseList(ListNode* head);
#endif //CPLUSLEARNING_FUNC_H
