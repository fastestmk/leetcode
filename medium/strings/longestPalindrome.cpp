

string longestPalindrome(string s){
	int n = s.size();
	int low, high, maxlength = 1, start = 0;
	if(n == 1)
		return s;
	for(int i = 1; i < n; ++i){
		// for even legth substring
		low = i-1;
		high = i;

		while(low >= 0 && high < n && (s[low] == s[high])){
			if(maxlength < high-low+1){
				maxlength = high-low+1;
				start = low; // starting index of longest palindrome
			}
			// increasing length of substring
			low--;
			high++;
		}

		// for odd substring
		low = i-1;
		high = i+1;

		while(low >= 0 && high < n && (s[low] == s[high])){
			if(maxlength < high-low+1){
				maxlength = high-low+1;
				start = low;
			}
			low--;
			high++;
		}
	}    

	// cout << maxlength << endl;
	string ans = s.substr(start, maxlength);
	return ans;    
}

