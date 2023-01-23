#include <iostream>
#include <string>
using namespace std;

string decrypt(string encodedText, string key) {
    string decodedText = "";
    for (int i = 0; i < encodedText.length(); i++) {
        char decodedChar = (encodedText[i] - (key[i % key.length()] - 'A') + 26) % 26 + 'A';
        decodedText += decodedChar;
    }
    return decodedText;
}

int main() {
    string encodedText;
    string key;
    cout << "Enter the encoded text: ";
    getline(cin, encodedText);
    cout << "Enter the key: ";
    getline(cin, key);
    string decodedText = decrypt(encodedText, key);
    cout << "Decoded text: " << decodedText << endl;
    return 0;
}
