#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SettingsCommandPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCommandString;
    ::ll::TypedStorage<1, 1, bool>         mSuppressOutput;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mCommandString;
    ::ll::TypedStorage<1, 1, bool>           mSuppressOutput;
#endif // @header-generator platform
    // NOLINTEND
};
