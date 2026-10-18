#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct NoiseBlockSpecifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>              mNoise;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>            mNoise;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                     mThreshold;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRange;
    ::ll::TypedStorage<8, 8, ::Block const*>            mBlock;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    NoiseBlockSpecifier();
#else // @header-generator platform
#endif // @header-generator platform
};
