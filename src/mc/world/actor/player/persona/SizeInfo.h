#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct SizeInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view> mSizeName;
    ::ll::TypedStorage<8, 16, std::string_view> mSizeTexturePath;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::string_view> mSizeName;
    ::ll::TypedStorage<8, 16, ::std::string_view> mSizeTexturePath;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SizeInfo();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace persona
