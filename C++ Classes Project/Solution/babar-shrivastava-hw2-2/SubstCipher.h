#include <string>
using namespace std;

class SubstCipher
{public:
	SubstCipher(string newCipher);

	string getCipherKeys();

	void setCipherKeys(string addCipher);

	char encodeChar(char plain);

	char decodeChar(char cipher);

	string encodeString(string plain);

	string decodeString(string cipher);
	
private:
	string cipherKeys;

	int charToAlphabetPosition(char c);

	char alphabetPositionToChar(int pos);

};