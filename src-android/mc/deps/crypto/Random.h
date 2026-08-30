#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Random {

class Random {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, std::random_device> rd;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fillType(void*, uint);

    MCNAPI std::string getBytes(uint);
    // NOLINTEND
};

} // namespace Crypto::Random
