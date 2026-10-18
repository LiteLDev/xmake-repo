#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CommandOutput.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct CommandOutputPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::CommandOriginData> mOriginData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::CommandOriginData> mOriginData;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 48, ::CommandOutput>     mOutput;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CommandOutputPacketPayload& operator=(CommandOutputPacketPayload const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandOutputPacketPayload(::CommandOrigin const&, ::CommandOutput const&);

    MCNAPI ~CommandOutputPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandOrigin const&, ::CommandOutput const&);
#else // @header-generator platform
    MCAPI ~CommandOutputPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
