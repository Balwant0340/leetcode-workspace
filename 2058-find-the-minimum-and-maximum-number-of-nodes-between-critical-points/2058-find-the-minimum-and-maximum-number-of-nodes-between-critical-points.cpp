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
        ListNode *temp = head->next;
        vector<int>critical_points;
        int pre_val = head->val;
        for(int i = 2;temp->next != nullptr;++i){
            if(temp->val > pre_val && temp->val > temp->next->val){
                critical_points.push_back(i);
            }
            else if(temp->val < pre_val && temp->val < temp->next->val){
                critical_points.push_back(i);
            }
            pre_val = temp->val;
            temp = temp->next;
        }
        int n = critical_points.size();
        if(n <= 1) return {-1,-1};
        int maxDistance = critical_points[n-1] - critical_points[0];
        int minDistance = critical_points[1] - critical_points[0];
        for(int i = 2;i < n;++i){
            if(minDistance > critical_points[i] - critical_points[i-1]){
                minDistance = critical_points[i] - critical_points[i-1];
           }
        }
        return {minDistance,maxDistance};

    }
};