#include <iostream>
#include "SubstCipher.h"
#include <string>
using namespace std;

SubstCipher::SubstCipher(string newCipher)
{
	cipherKeys = newCipher;
}

string SubstCipher::getCipherKeys()
{
	return cipherKeys;
}

void SubstCipher::setCipherKeys(string addCipher)
{
	if (addCipher.length() == 26)
	{
		cipherKeys = addCipher;
	}
	else
	{
		cout << "Cipher keys string must have length 26. Request ignored." << endl;
	}
}

int SubstCipher::charToAlphabetPosition(char c) {
	return static_cast<int>(c)-static_cast<int>('a');
}

char SubstCipher::alphabetPositionToChar(int pos) {
	return static_cast<char>(pos + static_cast<int>('a'));
}

char SubstCipher::encodeChar(char plain)
{
	return cipherKeys[charToAlphabetPosition(plain)];
}

char SubstCipher::decodeChar(char cipher) {
	return alphabetPositionToChar(cipherKeys.find(cipher));
}

string SubstCipher::encodeString(string plain)
{
	string cipher;
	for (int i = 0; i < plain.length(); i++)
	{
		cipher = cipher + encodeChar(plain[i]);
	}
	return cipher;
}

string SubstCipher::decodeString(string cipher)
{
	string plain;
	for (int i = 0; i < cipher.length(); i++)
	{
		plain = plain + decodeChar(cipher[i]);
	}
	return plain;
}

