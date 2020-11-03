vector<vector<string> > groupAnagrams(vector<string> strs){
	unordered_map<string, vector<string> >hash;
	for(auto s : strs){
		string sorted_string = s;
		sort(sorted_string.begin(), sorted_string.end());
		hash[sorted_string].push_back(s);
	}

	vector<vector<string> > anagrams; 
	for(auto p : hash){
		anagrams.push_back(p.second); // p.second is vectors of anagrams
	}
	return anagrams;
}