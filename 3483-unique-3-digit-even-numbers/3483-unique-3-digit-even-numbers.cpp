class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>frequency(10,0);
        for(int i = 0;i < digits.size();++i){
            frequency[digits[i]]++;
        }
        int ans = 0;
        for(int i = 100;i <= 998;i += 2){
            int a = i % 10;
            int b = (i / 10) % 10;
            int c = (i / 100);
            frequency[a]--;
            frequency[b]--;
            frequency[c]--;

            if(frequency[a] >= 0 && frequency[b] >= 0 && frequency[c] >= 0){
                ans++;
            }
            frequency[a]++;
            frequency[b]++;
            frequency[c]++;
        }
        return ans;
    }
};