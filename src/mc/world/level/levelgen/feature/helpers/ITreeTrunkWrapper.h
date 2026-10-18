#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITreeTrunk;
// clang-format on

class ITreeTrunkWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ITreeTrunk>> mPtr;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ITreeTrunk>> mPtr;
#endif // @header-generator platform
    // NOLINTEND
};
