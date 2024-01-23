#pragma once

#include <string>
#include <vector>

namespace Ciphers {
    std::string Caesar(const std::string &text, int shift);

    std::string XOR(const std::string &data, const std::string &key);
}