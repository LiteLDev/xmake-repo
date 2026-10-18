#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITreeRoot;
// clang-format on

class ITreeRootWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ITreeRoot>> mPtr;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ITreeRoot>> mPtr;
#endif // @header-generator platform
    // NOLINTEND
};
