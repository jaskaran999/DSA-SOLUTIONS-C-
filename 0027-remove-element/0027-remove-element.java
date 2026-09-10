class Solution {
    public int removeElement(int[] nums, int val) {
        int n = nums.length;
        int ans = 0;
        for(int i = 0; i < n ; i++){
            if(nums[i] == val){
                ans++;
                nums[i] = Integer.MAX_VALUE;
            }
        }
        Arrays.sort(nums);
        System.out.println(n - ans);
        return n - ans;
    }
}