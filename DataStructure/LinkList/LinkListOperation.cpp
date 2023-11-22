#include "func.h"

//
// Created by illumwang on 23-11-22.
//
//创建链表
#include "iostream"
using namespace std;
ListNode* CreateLinkList(initializer_list<int> values){
    ListNode* head= nullptr;
    ListNode* tail= nullptr;
    for (int val:values) {
        ListNode* newVal=new ListNode(val);
        if (!head){
            head=newVal;
            tail=newVal;
        } else{
            tail->next=newVal;
            tail=newVal;
        }
    }
    return head;
}
//打印链表
void PrintElements(ListNode *head){
    ListNode* cur=head;
    while (cur!= nullptr){
        cout<<cur->val<< " ";
        cur=cur->next;
    }
    cout<<endl;
}
//print circle:choose print point
void printCircle(ListNode* head, int n) {
    ListNode* current = head;
    for (int i = 0; i < n; ++i) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
//circle list
ListNode *createCircle(initializer_list<int> values){
    ListNode* head= nullptr;
    ListNode* tail= nullptr;
    for (int val:values) {
        ListNode* newNode=new ListNode(val);
        if (!head){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    //链接最后一个节点与首节点
    if (tail){
        tail->next=head;
    }
    return head;
}