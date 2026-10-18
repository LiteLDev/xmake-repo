#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class PartyDestinationCookieResponsePacket;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct PartyDestinationCookieResponseEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCookie;
    ::ll::UntypedStorage<1, 8>             mAccepted;
    ::ll::UntypedStorage<1, 24>            mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyDestinationCookieResponseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PartyDestinationCookieResponseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>              mCookie;
    ::ll::TypedStorage<1, 1, bool>                        mAccepted;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
#endif // @header-generator platform
    // NOLINTEND
};
