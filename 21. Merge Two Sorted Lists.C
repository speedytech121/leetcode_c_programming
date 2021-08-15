/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* ReturnNode=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* HeadNode=ReturnNode;
    
    while(l1!=NULL && l2!=NULL){
        //compare the two values
        if(l1->val <= l2->val){
            ReturnNode->next=l1;
            l1=l1->next;
        }else{
            ReturnNode->next=l2;
            l2=l2->next;
        }
        ReturnNode=ReturnNode->next;
    }
    
    //append the remaining list
    if(l1==NULL) ReturnNode->next=l2;
    if(l2==NULL) ReturnNode->next=l1;
    
   return HeadNode->next;

}