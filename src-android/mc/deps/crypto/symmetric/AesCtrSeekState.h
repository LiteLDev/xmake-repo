#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class AesCtrSeekState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mIVCounter;
    ::ll::TypedStorage<8, 8, ulong>        mOffsetWithinBlock;
    // NOLINTEND
};

} // namespace Crypto::Symmetric
