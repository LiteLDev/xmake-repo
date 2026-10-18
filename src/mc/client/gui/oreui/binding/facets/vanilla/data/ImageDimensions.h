#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ImageDimensionsData;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ImageDimensions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageDimensions();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ImageDimensions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    // NOLINTEND
};
#else // @header-generator platform
struct ImageDimensions {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
