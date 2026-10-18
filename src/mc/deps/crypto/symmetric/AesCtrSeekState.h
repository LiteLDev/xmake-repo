#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class AesCtrSeekState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mIVCounter;
    ::ll::TypedStorage<8, 8, ulong>        mOffsetWithinBlock;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk1d78ca;
    ::ll::UntypedStorage<8, 8>  mUnk454397;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AesCtrSeekState& operator=(AesCtrSeekState const&);
    AesCtrSeekState(AesCtrSeekState const&);
    AesCtrSeekState();
#endif // @header-generator platform
};

} // namespace Crypto::Symmetric
