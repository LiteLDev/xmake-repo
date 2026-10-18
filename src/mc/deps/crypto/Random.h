#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Random {

class Random {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, std::random_device> rd;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk93b04e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);
    Random();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fillType(void*, uint);

    MCNAPI std::string getBytes(uint);
#else // @header-generator platform
    MCNAPI ::std::string getBytes(uint amount);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Random
