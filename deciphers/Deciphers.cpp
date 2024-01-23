#include "Deciphers.h"

std::string Deciphers::Caesar(const std::string &encryptedText, int shift) {
    std::string dText;

    for (char character: encryptedText) {
        if (isalpha(character)) {
            char start = isupper(character) ? 'A' : 'a';
            dText += static_cast<char>((character - start - shift + 26) % 26 + start);
        } else {
            dText += character;
        }
    }

    return dText;
}

std::string Deciphers::XOR(const std::string &data, const std::string &key) {
    return Ciphers::XOR(data, key);
}