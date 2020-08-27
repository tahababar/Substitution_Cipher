#include <iostream>
#include <string>
#include "SubstCipher.h"
using namespace std;
int main() {
	// abcdefghijklmnopqrstuvwxyz
	SubstCipher cipher("qwertyuiopasdfghjklzxcvbnm");
	cout << "=====================================================" << endl;
	cout << "Using keys: " << cipher.getCipherKeys() << endl;
	cout << endl;
	cout << "Encode 'a': " << cipher.encodeChar('a') << endl;
	cout << "Decode 'q': " << cipher.decodeChar('q') << endl;
	cout << endl;
	cout << "Encode \"hello\" : " << cipher.encodeString("hello") << endl;
	cout << "Decode \"itssg\" : " << cipher.decodeString("itssg") << endl;
	cout << endl;
	cout << "=====================================================" << endl;
	cipher.setCipherKeys("wrong");
	cout << endl;
	cout << "=====================================================" << endl;
	// abcdefghijklmnopqrstuvwxyz
	cipher.setCipherKeys("laksjdhfgqpwoeirutyzmxncbv");
	cout << "Using keys: " << cipher.getCipherKeys() << endl;
	cout << "Encode 's': " << cipher.encodeChar('s') << endl;
	cout << "Decode 'q': " << cipher.decodeChar('q') << endl;
	cout << endl;
	cout << "Encode \"sup\" : " << cipher.encodeString("sup") << endl;
	cout << "Decode \"fjwwi\" : " << cipher.decodeString("fjwwi") << endl;
	cout << endl;
	return 0;
}