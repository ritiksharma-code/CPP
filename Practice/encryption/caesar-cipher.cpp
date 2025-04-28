#include <iostream>
#include <string>
using namespace std;

// Function to encrypt the text using Caesar Cipher
string encrypt(string text, int shift) {
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        // Encrypt uppercase letters
        if (isupper(text[i])) {
            result += char(int(text[i] + shift - 65) % 26 + 65);
        }
        // Encrypt lowercase letters
        else if (islower(text[i])) {
            result += char(int(text[i] + shift - 97) % 26 + 97);
        }
        // If it's not a letter, keep it as it is
        else {
            result += text[i];
        }
    }
    return result;
}

// Function to decrypt the text using Caesar Cipher
string decrypt(string text, int shift) {
    return encrypt(text, 26 - shift);  // Decryption is just encryption with the inverse shift
}

int main() {
    string text;
    int shift;

    cout << "Enter the text: ";
    getline(cin, text);
    
    cout << "Enter the shift value: ";
    cin >> shift;

    string encrypted = encrypt(text, shift);
    string decrypted = decrypt(encrypted, shift);

    cout << "Encrypted text: " << encrypted << endl;
    cout << "Decrypted text: " << decrypted << endl;

    return 0;
}
