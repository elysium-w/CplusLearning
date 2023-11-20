//
// Created by illumwang on 23-11-20.
//

#include <iostream>
#include "func.h"
using namespace std;
//定义链表结构

//创建链表
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
//移除元素
ListNode* removeElements(ListNode* head, int val) {
//删除头结点
    while (head!= nullptr&&head->val==val){
        ListNode* tmp=head;
        head=head->next;
        delete tmp;
    }
    ListNode* cur=head;
    //删除非头结点
    while (cur!= nullptr&&cur->next!= nullptr){
        if (cur->next->val==val){
            ListNode* tmp=cur->next;
            cur->next=cur->next->next;
            delete tmp;
        }else{
            cur=cur->next;
        }
    }
    return head;
}
//int main(){
//    ListNode* listNode= CreateLinkList({1,2,1,4,5,6});
//    cout<<"打印链表"<<endl;
//    PrintElements(listNode);
//    cout<<"删除元素"<<endl;
//    ListNode* last=removeElements(listNode,1);
//    PrintElements(last);
//
//}