#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CodeBuilderPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mURL;
    ::ll::TypedStorage<1, 1, bool>         mShouldOpenCodeBuilder;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mURL;
    ::ll::TypedStorage<1, 1, bool>           mShouldOpenCodeBuilder;
#endif // @header-generator platform
    // NOLINTEND
};
