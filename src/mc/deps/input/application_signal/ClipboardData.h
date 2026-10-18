#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApplicationSignal {

#if defined(LL_PLAT_A) // @header-generator platform
struct ClipboardData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::wstring> mData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ClipboardData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::wstring> mData;
    // NOLINTEND
};
#else // @header-generator platform
struct ClipboardData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ApplicationSignal
