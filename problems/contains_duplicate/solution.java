class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> hmap = new HashSet<>();
        for(int i=0; i<nums.length; i++){
            if(hmap.contains(nums[i])){
               return true;
            }
            hmap.add(nums[i]);
        }
        return false;
    }
}