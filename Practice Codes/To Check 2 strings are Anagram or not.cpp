/*
Algorithm
1- If length is not same then not Anagram
2- else sort all the characters 
3- match the strings if not same then not anagram else anagram  
*/



#include<iostream>
#include<algorithm>           //for sorting
#include<string>
using namespace std;

bool isAnagram(string A, string B) {
	int n1, n2, i;
	n1 = A.length();
	n2 = B.length();
	if (n1 != n2)
		return false;
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	for (i = 0; i < n1; i++) {
		if (A[i] != B[i])
			return false;
	}

	return true;

}


int main() {
	if (isAnagram("hil", "hoi"))
		cout << "Yes";

	return 0;
}
