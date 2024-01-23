#pragma once

#include <string>
#include <vector>
#include "../ciphers/Ciphers.h"

namespace Deciphers {
    std::string Caesar(const std::string &encryptedText, int shift);

    std::string XOR(const std::string &data, const std::string &key);
}