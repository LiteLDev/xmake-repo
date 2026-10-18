#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ScriptMessagePacket;
// clang-format on

struct ClientMessageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessageId;
    ::ll::TypedStorage<8, 24, std::string> mMessageValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientMessageEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientMessageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ClientMessageEvent {};
#endif // @header-generator platform
