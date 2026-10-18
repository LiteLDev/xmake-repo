#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on
#endif // @header-generator platform

struct PlayerTellRawCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mSender;
    ::ll::UntypedStorage<8, 24>            mTargets;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                             mSender;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                             mMessage;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerTellRawCommandEvent& operator=(PlayerTellRawCommandEvent const&);
    PlayerTellRawCommandEvent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerTellRawCommandEvent(::PlayerTellRawCommandEvent const&);

    MCNAPI ~PlayerTellRawCommandEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerTellRawCommandEvent const&);
#else // @header-generator platform
    MCAPI ~PlayerTellRawCommandEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
