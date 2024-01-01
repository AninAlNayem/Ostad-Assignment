/*
You are given the heads of two sorted linked lists list1 and list2.Merge the two lists into one sorted list. 
The list should be made by splicing together the nodes of the first two lists.
/*

// Function to Merge two sorted linked list in non-decreasing order

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *temp,*dummy;
        dummy=new ListNode(); // allcation dynamically
        temp=dummy;
        
        while(list1!=NULL && list2!=NULL){
            if(list1->val < list2->val){
                temp->next=list1; // appned to linked list temp is ponting to
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next; // update temp.
         }
        
        if(list1!=NULL) temp->next=list1;
        if(list2!=NULL) temp->next=list2;
        
        temp=dummy->next;
        delete dummy;
        return temp;
}
