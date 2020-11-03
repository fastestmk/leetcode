bool isPalindrome(string str){
	if(str.empty())
		return true;
	int n = str.size();
	int i = 0, j = n-1;
	while(i < j){
		if(!isalnum(str[i]))
			i++;
		else if(!isalnum(str[j]))
			j--;
		else if(tolower(str[i++]) != tolower(str[j--]))
			return false;
	}
	return true;

}