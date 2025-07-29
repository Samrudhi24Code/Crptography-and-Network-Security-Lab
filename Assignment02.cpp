#include <iostream>
#include <string>
using namespace std;


string generateKey(string message, string key) {
    int messageLen = message.size();
    int keyLen = key.size();

    for (int i = 0; i < messageLen - keyLen; i++) {
        key += key[i % keyLen];
    }

    return key;
}


string encrypt(string message, string key) {
    string cipherText = "";

    for (int i = 0; i < message.size(); i++) {
        char encChar = ((message[i] - 'A') + (key[i] - 'A')) % 26 + 'A';
        cipherText += encChar;
    }

    return cipherText;
}


string decrypt(string cipherText, string key) {
    string originalText = "";

    for (int i = 0; i < cipherText.size(); i++) {
        char decChar = ((cipherText[i] - 'A') - (key[i] - 'A') + 26) % 26 + 'A';
        originalText += decChar;
    }

    return originalText;
}

int main() {
    string message, keyword;

    cout << "Enter the message (in uppercase letters only): ";
    cin >> message;

    cout << "Enter the keyword (in uppercase letters only): ";
    cin >> keyword;

    string key = generateKey(message, keyword);

    string encrypted = encrypt(message, key);
    string decrypted = decrypt(encrypted, key);

    cout << "\nGenerated Key: " << key;
    cout << "\nEncrypted Message: " << encrypted;
    cout << "\nDecrypted Message: " << decrypted << endl;

    return 0;
}
