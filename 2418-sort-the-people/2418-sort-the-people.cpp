class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for (int i = 0; i < heights.size(); ++i) {
            people.push_back({heights[i], names[i]});
        }
        sort(people.rbegin(), people.rend());
        vector<string> result;
        for (int i = 0; i < people.size(); ++i) {
            result.push_back(people[i].second);
        }
        return result;
    }
};