#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/events/PlayerFormCloseReason.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerFormCloseEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                       mPlayer;
    ::ll::TypedStorage<4, 4, uint>                    mFormId;
    ::ll::TypedStorage<4, 4, ::PlayerFormCloseReason> mFormCloseReason;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 4, uint>                        mFormId;
    ::ll::TypedStorage<4, 4, ::PlayerFormCloseReason>     mFormCloseReason;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerFormCloseEvent& operator=(PlayerFormCloseEvent const&);
    PlayerFormCloseEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
