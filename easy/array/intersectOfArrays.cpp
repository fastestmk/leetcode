vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	 unordered_map<int, int> m;
	 vector<int> intersect;
	 for(auto num : nums1){
	 	m[num]++;
	 }
	 for(auto num : nums2){
	 	if(m[num]-- > 0)
	 		intersect.push_back(num);
	 }
	 return intersect;
}
