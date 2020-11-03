int lengthOfLongestSubstring(string s){
	int start = -1, maxLen = 0;
	vector<int> hash(256, -1);
	for(int i = 0; i < s.size(); ++i){
		if(hash[s[i]] > start)
			start = hash[s[i]]; // start is index of previous char's index
		hash[s[i]] = i;
		maxLen = max(maxLen, i-start);
	}
	return maxLen;
}
