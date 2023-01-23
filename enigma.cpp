#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, string key) {
    string encryptedText = "";
    for (int i = 0; i < text.length(); i++) {
        encryptedText += (text[i] + key[i % key.length()]) % 26 + 'A';
    }
    return encryptedText;
}

string decrypt(string encryptedText, string key) {
    string text = "";
    for (int i = 0; i < encryptedText.length(); i++) {
        text += (encryptedText[i] - key[i % key.length()] + 26) % 26 + 'A';
    }
    return text;
}

int main() {
    string text;
    string key;
    cout << "Enter the text to encrypt: ";
    getline(cin, text);
    cout << "Enter the key: ";
    getline(cin, key);
    string encryptedText = encrypt(text, key);
    cout << "Encrypted text: " << encryptedText << endl;
    cout << "Decrypted text: " << decrypt(encryptedText, key) << endl;
    return 0;
}
