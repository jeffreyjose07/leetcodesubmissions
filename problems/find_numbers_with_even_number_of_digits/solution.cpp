namespace {
    
    constexpr bool even(int i)
    {
        unsigned digits = 0;
        while(i)
        {
            ++digits;
            i /= 10;
        }
        return (digits & 1u) == 0u;
    }
    
    bool g_is_even[100001];
    
    static const auto initer=[]()
    {
        for(unsigned i = 0; i <= 100000; ++i){
            g_is_even[i] = even(i);
        }
        return nullptr;
    }();
    
}

class Solution {
public:
    static int findNumbers(const vector<int>& nums) {
        unsigned count = 0;
        for(int i : nums)
        {
            count += i <= 100000 ? g_is_even[i] : even(i);
        }
        return count;
        
    }
};