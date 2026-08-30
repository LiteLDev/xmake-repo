#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ScriptMessagePacket;
// clang-format on

struct MessageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessageId;
    ::ll::TypedStorage<8, 24, std::string> mMessageValue;
    ::ll::UntypedStorage<1, 24>            mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MessageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
