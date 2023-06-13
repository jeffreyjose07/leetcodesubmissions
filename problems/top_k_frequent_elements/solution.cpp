class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Step 1: Count the frequency of each element using a frequency map
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        // Step 2: Create buckets to store elements based on their frequencies
        // Each bucket at index i will store elements with frequency i
        vector<vector<int>> buckets(n + 1);
        for (auto it = m.begin(); it != m.end(); it++) {
            buckets[it->second].push_back(it->first);
        }
        
        // Step 3: Retrieve the top k frequent elements from the buckets
        vector<int> result;
        for (int i = n; i >= 0; i--) {
            if (result.size() >= k) {
                break;  // If we have found k elements, we can stop
            }
            if (!buckets[i].empty()) {
                result.insert(result.end(), buckets[i].begin(), buckets[i].end());
            }
        }
        
        return result;
    }
};