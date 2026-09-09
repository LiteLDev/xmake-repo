#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

struct RsaPublicKeyComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> modulus;
    ::ll::TypedStorage<8, 24, std::string> exponent;
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
