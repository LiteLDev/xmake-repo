#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/TestParameters.h"

struct GameTestRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mTestName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>              mTestName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 64, ::gametest::TestParameters> mParams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameTestRequestPacketPayload(::GameTestRequestPacketPayload const&);

    MCNAPI ~GameTestRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameTestRequestPacketPayload const&);
#else // @header-generator platform
    MCAPI ~GameTestRequestPacketPayload();
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
