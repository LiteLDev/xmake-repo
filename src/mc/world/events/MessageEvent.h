#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptMessagePacket;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct MessageEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>              mMessageId;
    ::ll::TypedStorage<8, 32, ::std::string>              mMessageValue;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
#endif // @header-generator platform
    // NOLINTEND
};
