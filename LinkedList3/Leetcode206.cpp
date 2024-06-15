// very Imp generally ask in interview
// Reverse Linked List
// Yadd kr lena 
// Next = curr->next
// curr-> next = prev
// prev = curr;
// curr = Next;
// return prev

// This is best solution
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next = head; // it is diffrent from next and Next
//         while(curr){ // curr!=NULL
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }
//         return prev;
//     }
// };














// class Solution {
// public:
//     ListNode* getNodeAt(ListNode* head,int idx) {
//         ListNode* temp = head;
//         // 1 2 3 4 5
//         for(int i=1;i<=idx;i++){
//             temp = temp->next;
//         }
//         return temp;
//     }
//     ListNode* reverseList(ListNode* head) {
//         int n =0;
//         ListNode* temp = head;
//         while(temp){ // temp!=NULL it is short form
//            temp = temp->next;
//            n++;
//         }
//         int i = 0;
//         int j= n-1;
//         while(i<j){
//             ListNode* left = getNodeAt(head,i);
//           ListNode* right = getNodeAt(head,i);
//           int t = left->val;
//           left->val = right->val;
//           right->val = t;
//           i++;
//           j--;
            
//         }
//         return head;
//     }
// }; this is bad method 