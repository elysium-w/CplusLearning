//
// Created by illumwang on 23-11-20.
//
/**
* 给定一个链表的头节点  head ，返回链表开始入环的第一个节点。
 * 如果链表无环，则返回 null。
 * 如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。
 * 为了表示给定链表中的环，
 * 评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
 * 如果 pos 是 -1，则在该链表中没有环。
 * 注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
 * 不允许修改 链表
*/
#include <initializer_list>
#include <iostream>

using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){}
};
ListNode *detectCycle(ListNode *head) {
    //定义快慢指针
    ListNode* fast=head;
    ListNode* slow=head;
    while (fast!= nullptr&& fast->next!= nullptr){
        fast=fast->next->next;
        slow=slow->next;
        //快慢指针相遇,证明链表内存在环，开始计算入环点
        if (fast==slow){
            //定义两个节点，一个在相遇点，一个在头节点，两者相遇的位置就是入环点
            ListNode* index1=fast;
            ListNode* index2=head;
            while (index1!=index2){
                index1=index1->next;
                index2=index2->next;
            }
            return index2;
        }
    }
    return nullptr;
}
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
void printCircle(ListNode* head, int n) {
    ListNode* current = head;
    for (int i = 0; i < n; ++i) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
int main(){
    ListNode* circle = createCircle({1, 2, 3, 4, 5});
    // 打印环形链表的前10个节点
    printCircle(circle, 10);

}