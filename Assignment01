#include <iostream>
using namespace std;

void CaesarCipher(string str, int n, int key) {
    string CT;

    // Encryption
    for (int i = 0; i < n; i++) {
        char ch = str[i];

        if (isupper(ch)) {
            ch = ((ch - 'A' + key) % 26) + 'A';
        } else if (islower(ch)) {
            ch = ((ch - 'a' + key) % 26) + 'a';
        }
        
        CT += ch;
    }

    cout << "Encrypted Text: " << CT << endl;

    string PT;

    // Decryption
    for (int i = 0; i < n; i++) {
        char ch = CT[i];

        if (isupper(ch)) {
            ch = ((ch - 'A' - key + 26) % 26) + 'A';  // Add 26 to avoid negative values
        } else if (islower(ch)) {
            ch = ((ch - 'a' - key + 26) % 26) + 'a';
        }

        PT += ch;
    }

    cout << "Decrypted Text: " << PT << endl;
}

int main() {
    string s;
    int key;

    cout << "Enter the text: ";
    cin >> s;

    cout << "Enter the key (number): ";
    cin >> key;

    CaesarCipher(s, s.length(), key);

    return 0;
}
