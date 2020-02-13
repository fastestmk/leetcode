def isPalindrome(str):
	str = ''.join(x for x in str if x.isalnum()).lower()
	return str == str[::-1]