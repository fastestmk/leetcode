vector<vector<int>> threeSum(vector<int>& nums){

    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int> > res;

    for(int i = 0; i < n-2; ++i){
        if(i > 0 && (nums[i] == nums[i-1]))
            continue;
        int low = i+1, high = n-1;

        while(low < high){
            int sum = nums[i]+nums[low]+nums[high];
            if(sum < 0){
                low++;
            }
            else if(sum > 0){
                high--;
            }
            else{
                // cout << nums[i] << " " << nums[low] << " " << nums[high] << endl;
                res.push_back(vector<int>{nums[i], nums[low], nums[high]});
                while(low+1 < high && nums[low] == nums[low+1]) // skipping duplicates values
                    low++;
                while(low < high-1 && nums[high] == nums[high-1])
                    high--;
                low++, high--; // skipping last duplicate

            }
        }
    }
    return res;
}