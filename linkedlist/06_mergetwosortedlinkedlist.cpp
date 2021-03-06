//[Leet code : https://leetcode.com/problems/merge-two-sorted-lists/]

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* head = nullptr;
        
        
        if(list1 == nullptr){
            return list2;
        }
        
        if(list2 == nullptr){
            return list1;
        }
        
        if(list1 -> val<= list2->val){
            head = list1;
            head->next = mergeTwoLists(list1->next,list2);
        }else{
            head = list2;
            head->next = mergeTwoLists(list1,list2->next);
        }
        
        return head;
        
    }
