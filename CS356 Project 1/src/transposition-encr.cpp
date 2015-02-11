/*
 * transposition-encr.cpp
 *
 *  Created on: Feb 3, 2015
 *      Author: Greg
 */
// my first program in C++
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;
string k1;
string k2;
string textfile;
string plaintext;

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
	transform(tempkey.begin(), tempkey.end(),tempkey.begin(), ::toupper);
	cout << tempkey.substr(0,10);
	return tempkey.substr(0,10);
}
bool readPlaintext(string textfile) {
	string line;
	ifstream myfile(textfile.c_str());
	if (myfile.is_open()) {
		while (getline(myfile,line)) {
			plaintext += line;
	    }
		myfile.close();
	}else {
		return false;
	}
	return true;
}
void encrypt(string k1, string k2, string plaintext) {

}


int main() {
	string parseTemp;

	//Ask user for first key and sanitize that key
	cout << "Please enter a 10 character key. The key must contain only letters from the "
		  "English alphabet and must not contain duplicate characters.\n";
	cin >> k1;
	parseTemp = parseKey(k1);
	while (parseTemp.length() < 10) {
		cout << "The key must be at least 10 characters long. The key must contain only letters from the "
		  "English alphabet and must not contain duplicate characters. Please enter a valid key.\n";
		cin >> k1;
		parseTemp = parseKey(k1);
	}
	k1 = parseTemp;

	//Ask user for second key and sanitize that key
	cout << "First key accepted.\n" << "Now please enter a second key, satisfying the same criteria.\n";
	cin >> k2;
	parseTemp = parseKey(k2);
	while (parseTemp.length() < 10) {
		cout << "The key must be at least 10 characters long. The key must contain only letters from the "
		  "English alphabet and must not contain duplicate characters. Please enter a valid key.\n";
		cin >> k2;
		parseTemp = parseKey(k2);
	}
	k2 = parseTemp;

	//ask user for filename containing plaintext
	cout << "Second key accepted\n" << "Now please enter the name of a text file to be encrypted.\n";
	cin >> textfile;
	if (readPlaintext(textfile)) {
		cout << plaintext <<'\n';
	}
}
