int reverseInteger(int n){
	long long reverse;	
	while(n){
		reverse = reverse*10 + n%10;
		n /= 10;
	}
	return (reverse < INT_MIN || reverse > INT_MAX) ? 0 : reverse;
}