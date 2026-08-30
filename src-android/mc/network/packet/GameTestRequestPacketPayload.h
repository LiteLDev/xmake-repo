#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/TestParameters.h"

struct GameTestRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mTestName;
    ::ll::TypedStorage<8, 64, ::gametest::TestParameters> mParams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestRequestPacketPayload(::GameTestRequestPacketPayload const&);

    MCNAPI ~GameTestRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameTestRequestPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
