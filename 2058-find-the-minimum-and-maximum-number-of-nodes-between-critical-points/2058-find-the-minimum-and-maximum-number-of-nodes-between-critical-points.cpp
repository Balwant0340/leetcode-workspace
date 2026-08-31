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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *temp1 = head->next;
        int pre_val = head->val;
        int first_point = -1;
        int j = -1;
        int maxDistance = -1;
        int minDistance = -1;
        for(int i = 2;temp1->next != nullptr;++i){
            if((temp1->val > pre_val && temp1->val > temp1->next->val) || (temp1->val < pre_val && temp1->val < temp1->next->val)){
                if(first_point == -1){
                    first_point = i;
                    j = i;
                }
                else{
                    maxDistance = i - first_point;
                    if (minDistance == -1) {
                        minDistance = i - j;
                    } 
                    else {
                        minDistance = min(minDistance, i - j);
                    }
                    j = i;
                }
            }
            pre_val = temp1->val;
            temp1 = temp1->next;
        }
        
        return {minDistance,maxDistance};

    }
};