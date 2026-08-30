#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CommandOutput.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

struct CommandOutputPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::CommandOriginData> mOriginData;
    ::ll::TypedStorage<8, 48, ::CommandOutput>     mOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputPacketPayload& operator=(CommandOutputPacketPayload const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandOutputPacketPayload(::CommandOrigin const&, ::CommandOutput const&);

    MCNAPI ~CommandOutputPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandOrigin const&, ::CommandOutput const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
