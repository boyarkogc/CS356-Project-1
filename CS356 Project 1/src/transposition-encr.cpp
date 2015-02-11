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
bool validateKey(string key) {

	/*string tempkey = key;
	sort(key.begin(), key.end());
	key.erase(remove_if(key.begin(), key.end(), removeChar), key.end());
	key.erase(unique(key.begin(), key.end()), key.end());
	cout << key << "\n";
	if (key.length() >= 10) {

	}*/
	//return true;
}


int main() {
	cout << "Please enter a 10 character key. The key must contain only letters from the "
		  "English alphabet and must not contain duplicate characters.";
	cin >> k1;
	validateKey(k1);
	//if (k1.length() < 10) {
	//	cout << "Please enter a larger key" << '\n';
	//}
	//cin >> k2;
}
