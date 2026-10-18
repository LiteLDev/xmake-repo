#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApplicationSignal {

#if defined(LL_PLAT_A) // @header-generator platform
struct ClipboardCopyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ClipboardCopyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClipboardCopyData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ClipboardCopyData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ApplicationSignal
