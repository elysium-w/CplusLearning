//
// Created by illumwang on 23-11-20.
//
#include "func.h"

/**
 * 你可以选择使用单链表或者双链表，设计并实现自己的链表。

单链表中的节点应该具备两个属性：val 和 next 。val 是当前节点的值，next 是指向下一个节点的指针/引用。

如果是双向链表，则还需要属性 prev 以指示链表中的上一个节点。假设链表中的所有节点下标从 0 开始。

实现 MyLinkedList 类：

MyLinkedList() 初始化 MyLinkedList 对象。
int get(int index) 获取链表中下标为 index 的节点的值。如果下标无效，则返回 -1 。
void addAtHead(int val) 将一个值为 val 的节点插入到链表中第一个元素之前。在插入完成后，新节点会成为链表的第一个节点。
void addAtTail(int val) 将一个值为 val 的节点追加到链表中作为链表的最后一个元素。
void addAtIndex(int index, int val) 将一个值为 val 的节点插入到链表中下标为 index 的节点之前。如果 index 等于链表的长度，那么该节点会被追加到链表的末尾。如果 index 比长度更大，该节点将 不会插入 到链表中。
void deleteAtIndex(int index) 如果下标有效，则删除链表中下标为 index 的节点。
 */
 //初始化链表
MyLinkedList::MyLinkedList() {
    //虚假头节点
    _header=new ListNode(0);
    _size=0;
}
//获取链表中下标为 index 的节点的值。如果下标无效，则返回 -1
int MyLinkedList::get(int index) {
    //判断index是否合法
    if (index<0||index>(_size-1)){
        return -1;
    }
    ListNode* cur=_header->next;
    while (index--){
        cur=cur->next;
    }
    return cur->val;
}
//将一个值为 val 的节点插入到链表中第一个元素之前。在插入完成后，新节点会成为链表的第一个节点
void MyLinkedList::addAtHead(int val) {
    ListNode* newNode=new ListNode(val);
    newNode->next=_header->next;
    _header->next=newNode;
    _size++;
}
//将一个值为 val 的节点插入到链表中下标为 index 的节点之前。如果 index 等于链表的长度，那么该节点会被追加到链表的末尾。如果 index 比长度更大，该节点将 不会插入 到链表中。
void MyLinkedList::addAtIndex(int index, int val) {
    ListNode* newNode=new ListNode(val);
    ListNode* cur =_header;
    //首先排除不合法情况
    if (index>_size) return;
    //判断节点的位置,为头结点，中间节点还是尾节点
    if (index==0) {
        addAtHead(val);
    } else if (index==_size){
        addAtTail(val);
    }
    while (index--){
        cur=cur->next;
    }
    newNode->next=cur->next;
    cur->next=newNode;
    _size++;
}
//将一个值为 val 的节点追加到链表中作为链表的最后一个元素
void MyLinkedList::addAtTail(int val) {
    ListNode* newNode=new ListNode(val);
    ListNode* cur=_header;
    int index=_size-1;
    while (index--){
        cur=cur->next;
    }
    cur->next=newNode;
}
//如果下标有效，则删除链表中下标为 index 的节点。
void MyLinkedList::deleteAtIndex(int index) {
    if (index>_size-1||index<0) return;
    ListNode* cur=_header;
    while (index--){
        cur=cur->next;
    }
    ListNode* tmp=cur->next;
    cur->next=cur->next->next;
    delete tmp;
    _size--;
}