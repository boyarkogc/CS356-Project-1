/*
 * transposition-encr.cpp
 *
 *  Created on: Feb 3, 2015
 *      Author: Greg
 */
// my first program in C++
#include <iostream>
#include <string>

using namespace std;

int main() {
	string k1;
	string k2;
	cout << "Please enter 2 10 character keys. The keys must contain only letters from the "
		  "English alphabet and must not contain duplicate characters.";
	cin >> k1;
	cin >> k2;
	cout << "k1: " << k1 << "\n";
	cout << "k2: " << k2 << "\n";
}
