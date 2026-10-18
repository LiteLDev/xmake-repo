#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SourceClientHash {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mVal;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkff3bb8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SourceClientHash& operator=(SourceClientHash const&);
    SourceClientHash(SourceClientHash const&);
    SourceClientHash();
#endif // @header-generator platform
};
