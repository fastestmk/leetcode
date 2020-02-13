
bool isAnagram(string s, string t){
	int n = s.size();
	if(s.size() != t.size())
		return false;
	unordered_map<char, int> m;
	for(int i = 0; i < n; ++i){
		m[s[i]]++;
		m[t[i]]--;
	}
	for(auto i : s){
		if(m[i] != 0)
			return false;
	}
	return true;	
}