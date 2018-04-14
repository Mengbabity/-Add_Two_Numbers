/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int extra=0;   //进位数字
        ListNode res(0);  //结点
        ListNode*p=&res;   //p指向res首元素，指针
   
        while(l1||l2||extra)
        {
            int sum=(l1?l1->val:0)+(l2?l2->val:0)+extra;
            extra=sum/10;
            p->next=new ListNode(sum%10);
            p=p->next;
            l1=l1?l1->next:0;  //链表最后一位为空
            l2=l2?l2->next:0;
        }
        
        return res.next;   //反映链表，p单纯表示指针
    }
};
