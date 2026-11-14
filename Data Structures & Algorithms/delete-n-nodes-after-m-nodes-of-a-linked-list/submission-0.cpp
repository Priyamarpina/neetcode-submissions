/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        ListNode* curr=head;
        int mValue=m,nValue=n;
        while(curr){
            if(m==1){
                ListNode* temp=curr;
                //cout<<" m "<<curr->val<<endl;
                while(n>=0 && curr){
                    curr=curr->next;
                    n--;
                }
                temp->next=curr;
                m=mValue;
                n=nValue;
            }else{
                m--;
                curr=curr->next;
            }
        }
        return head;
    }
};
