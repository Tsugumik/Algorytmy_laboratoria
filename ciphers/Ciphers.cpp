#include "Ciphers.h"

std::string Ciphers::Caesar(const std::string &text, int shift) {
    std::string cText;
    for (char character: text) {
        if (std::isalpha(character)) {
            char start = isupper(character) ? 'A' : 'a';
            cText += static_cast<char>((character - start + shift) % 26 + start);
        } else {
            cText += character;
        }
    }

    return cText;
}

std::string Ciphers::XOR(const std::string &data, const std::string &key) {
    std::string result = data;
    size_t keySize = key.size();

    for (size_t i = 0; i < result.size(); ++i) {
        result[i] ^= key[i % keySize];
    }

    return result;
}