int maxSubArray(vector<int>& nums){
	int n = nums.size();
	if(n == 1)
		return nums[0];
	int best = nums[0], sum = 0;
	for(int i = 0; i < n; ++i){
		sum = max(nums[i], sum + nums[i]);
		best = max(best, sum);
	}     
	return best;
}