// fig05_20.cpp
// Encrypting and decrypting text with a Vigenere cipher
#include "cipher.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
   string plainText;
   cout << "Enter the text to encrypt:\n";
   getline(cin, plainText);

   string secretKey;
   cout << "\nEnter the secret key:\n";
   getline(cin, secretKey);

   Cipher cipher;

   // encrypting plainText using secretKey
   string cipherText{cipher.encrypt(plainText, secretKey)};
   cout << "\nEncrypted:\n " << cipherText << endl;

   // decrypt cipherText 
   cout << "\nDecrypted:\n "
      << cipher.decrypt(cipherText, secretKey) << endl;

   // decrypt ciphertext entered by the user
   cout << "\nEnter the ciphertext to decipher:\n";
   getline(cin, cipherText);
   cout << "\nDecrypted:\n "
      << cipher.decrypt(cipherText, secretKey) << endl;
}
