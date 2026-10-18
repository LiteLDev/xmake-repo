#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/actor/BannerPattern.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class BannerPattern;
// clang-format on
#endif // @header-generator platform

struct BannerPatternRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BannerPattern>> mStorage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BannerPatternRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BannerPattern>> mStorage;
#endif // @header-generator platform
    // NOLINTEND
};
