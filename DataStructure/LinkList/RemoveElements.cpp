//
// Created by illumwang on 23-11-20.
//

#include <iostream>

using namespace std;
//定义链表结构
struct ListNode{
    int Val;
    ListNode * Next;
    ListNode(int x):Val(x),Next(nullptr){}
};
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
            tail->Next=newVal;
            tail=newVal;
        }
    }
    return head;
}
//打印链表
void PrintElements(ListNode *head){
    ListNode* cur=head;
    while (cur!= nullptr){
        cout<<cur->Val<< " ";
        cur=cur->Next;
    }
    cout<<endl;
}
//移除元素
ListNode* removeElements(ListNode* head, int val) {
//删除头结点
    while (head!= nullptr&&head->Val==val){
        ListNode* tmp=head;
        head=head->Next;
        delete tmp;
    }
    ListNode* cur=head;
    //删除非头结点
    while (cur!= nullptr&&cur->Next!= nullptr){
        if (cur->Next->Val==val){
            ListNode* tmp=cur->Next;
            cur->Next=cur->Next->Next;
            delete tmp;
        }else{
            cur=cur->Next;
        }
    }
    return head;
}
int main(){
    ListNode* listNode= CreateLinkList({1,2,1,4,5,6});
    cout<<"打印链表"<<endl;
    PrintElements(listNode);
    cout<<"删除元素"<<endl;
    ListNode* last=removeElements(listNode,1);
    PrintElements(last);

}