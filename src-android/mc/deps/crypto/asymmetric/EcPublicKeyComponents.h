#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

struct EcPublicKeyComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> x;
    ::ll::TypedStorage<8, 24, std::string> y;
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
