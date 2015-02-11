/*
 * transposition-encr.cpp
 *
 *  Created on: Feb 3, 2015
 *      Author: Greg
 */
// my first program in C++
#include <iostream>
#include <string>
#include <algorithm>
#include <bitset>

using namespace std;
string k1;
string k2;

bool removeChar(char c) {
	if (isalpha(c)) {
		return false;
	}
	return true;
}
string parseKey(string key) {
	string tempkey = "";
	size_t found;
	int keyLength = key.length();

	for (int i = 0; i < keyLength; i++) {
		found = tempkey.find(key[i]);
		if (found == string::npos && isalpha(key[i])) {
			tempkey += key[i];
		}
	}
	return key;
}


int main() {
	cout << "Please enter a 10 character key. The key must contain only letters from the "
		  "English alphabet and must not contain duplicate characters.\n";
	cin >> k1;
	while (parseKey(k1).length() <= 10) {
		cout << "The key must be at least 10 characters long. The key must contain only letters from the "
		  "English alphabet and must not contain duplicate characters. Please enter a valid key.\n";
		cin >> k1;
	}
	cout << "First key accepted.\n" << "Now please enter a second key, satisfying the same criteria.\n";
	cin >> k2;
	while (parseKey(k1).length() <= 10) {
		cout << "The key must be at least 10 characters long. The key must contain only letters from the "
		  "English alphabet and must not contain duplicate characters. Please enter a valid key.\n";
		cin >> k1;
	}
	cout << "Second key accepted\n";
}
