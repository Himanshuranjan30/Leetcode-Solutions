class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> ans;
        while(head)
        {
            ans.push_back(head->val);
            head=head->next;
        }
        if(ans.empty())
            return nullptr;
        sort(ans.begin(),ans.end());
    
        ListNode* start= new ListNode(ans[0]);
        ListNode* r= start;
        for(int i=1;i<ans.size();i++)
        {
            
            start->next=new ListNode(ans[i]);
            start=start->next;
        }
        return r;
    }
};
