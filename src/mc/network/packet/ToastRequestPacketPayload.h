#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ToastRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 24, std::string> mContent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ToastRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mTitle;
    ::ll::TypedStorage<8, 32, ::std::string> mContent;
#endif // @header-generator platform
    // NOLINTEND
};
