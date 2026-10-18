#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisconnectPacketMessages {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::TypedStorage<8, 24, std::string> mFilteredMessage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::DisconnectPacketMessages const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
    ::ll::TypedStorage<8, 32, ::std::string> mFilteredMessage;
#endif // @header-generator platform
    // NOLINTEND
};
