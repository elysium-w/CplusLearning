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


#endif //CPLUSLEARNING_FUNC_H
