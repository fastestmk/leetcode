vector<int> plusOne(vector<int>& digits){
	int n = digits.size();
	for(int i = n-1; i >= 0; --i){
		if(++digits[i] < 10)
			return digits;
		digits[i] = 0;
	}
	digits[0] = 1; // if digits = {9,9,9}
	digits.push_back(0);
	return digits;
}