/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 
{
    struct ListNode *temp1 = headA;
    struct ListNode *temp2 = headB;
    
    int count1=0,count2=0;
    
    //for size of the list
    while(temp1!=NULL){
        count1++;
        temp1=temp1->next;
    }

    while(temp2!=NULL){
        count2++;
        temp2=temp2->next;
    }
    //for difference
    int diff=abs(count1-count2);
    
    temp1=headA;
    temp2=headB;

    if(count1>count2){
        for(int i=0;i<diff;i++){
            temp1=temp1->next;
        }
    }
    else{
        for(int i=0;i<diff;i++){
            temp2=temp2->next;
        }
    }
    
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp1;
}

